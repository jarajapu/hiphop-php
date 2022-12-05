(*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)
open Hh_prelude
module Err = Naming_phase_error
module SN = Naming_special_names

module Env : sig
  type t

  val empty : t
end = struct
  type t = unit

  let empty = ()
end

let afield_value cname afield =
  match afield with
  | Aast.AFvalue e -> (e, None)
  | Aast.AFkvalue (((_, pos, _) as e), _) ->
    (e, Some (Err.naming @@ Naming_error.Unexpected_arrow { pos; cname }))

let afield_key_value cname afield =
  match afield with
  | Aast.AFkvalue (ek, ev) -> ((ek, ev), None)
  | Aast.AFvalue ((_, pos, _) as ek) ->
    let ev =
      ((), pos, Aast.Lvar (pos, Local_id.make_unscoped "__internal_placeholder"))
    in
    ((ek, ev), Some (Err.naming @@ Naming_error.Missing_arrow { pos; cname }))

let on_expr_ (env, expr_, err_acc) =
  let res =
    match expr_ with
    | Aast.Collection ((pos, cname), c_targ_opt, afields)
      when Nast.is_vc_kind cname ->
      let (targ_opt, targ_err_opt) =
        match c_targ_opt with
        | Some (Aast.CollectionTV tv) -> (Some tv, None)
        | Some (Aast.CollectionTKV _) ->
          (None, Some (Err.naming @@ Naming_error.Too_many_arguments pos))
        | _ -> (None, None)
      in
      let (exprs, fields_err_opts) =
        List.unzip @@ List.map ~f:(afield_value cname) afields
      in
      let vc_kind = Nast.get_vc_kind cname in

      let err =
        List.fold_right
          ~init:targ_err_opt
          ~f:(fun err_opt acc ->
            Option.merge ~f:Err.Free_monoid.plus acc err_opt)
          fields_err_opts
      in
      Ok (Aast.ValCollection (vc_kind, targ_opt, exprs), err)
    | Aast.Collection ((pos, cname), c_targ_opt, afields)
      when Nast.is_kvc_kind cname ->
      let (targs_opt, targ_err_opt) =
        match c_targ_opt with
        | Some (Aast.CollectionTKV (tk, tv)) -> (Some (tk, tv), None)
        | Some (Aast.CollectionTV _) ->
          (None, Some (Err.naming @@ Naming_error.Too_few_arguments pos))
        | _ -> (None, None)
      in
      let (fields, fields_err_opts) =
        List.unzip @@ List.map ~f:(afield_key_value cname) afields
      in
      let kvc_kind = Nast.get_kvc_kind cname in
      let err =
        List.fold_right
          ~init:targ_err_opt
          ~f:(fun err_opt acc ->
            Option.merge ~f:Err.Free_monoid.plus acc err_opt)
          fields_err_opts
      in
      Ok (Aast.KeyValCollection (kvc_kind, targs_opt, fields), err)
    | Aast.Collection ((pos, cname), _, [])
      when String.equal SN.Collections.cPair cname ->
      Error (pos, Err.naming @@ Naming_error.Too_few_arguments pos)
    | Aast.Collection ((pos, cname), c_targ_opt, [fst; snd])
      when String.equal SN.Collections.cPair cname ->
      let (targs_opt, targ_err_opt) =
        match c_targ_opt with
        | Some (Aast.CollectionTKV (tk, tv)) -> (Some (tk, tv), None)
        | Some (Aast.CollectionTV _) ->
          (None, Some (Err.naming @@ Naming_error.Too_few_arguments pos))
        | _ -> (None, None)
      in
      let (fst, fst_err_opt) = afield_value SN.Collections.cPair fst
      and (snd, snd_err_opt) = afield_value SN.Collections.cPair snd in
      let err =
        List.fold_right
          ~init:targ_err_opt
          ~f:(fun err_opt acc ->
            Option.merge ~f:Err.Free_monoid.plus acc err_opt)
          [fst_err_opt; snd_err_opt]
      in
      Ok (Aast.Pair (targs_opt, fst, snd), err)
    | Aast.Collection ((pos, cname), _, _)
      when String.equal SN.Collections.cPair cname ->
      Error (pos, Err.naming @@ Naming_error.Too_many_arguments pos)
    | Aast.Collection ((pos, cname), _, _) ->
      Error (pos, Err.naming @@ Naming_error.Expected_collection { pos; cname })
    | _ -> Ok (expr_, None)
  in
  match res with
  | Ok (expr_, err_opt) ->
    Naming_phase_pass.Cont.next
      ( env,
        expr_,
        Option.value_map
          ~default:err_acc
          ~f:(Err.Free_monoid.plus err_acc)
          err_opt )
  | Error (pos, err) ->
    Naming_phase_pass.Cont.finish (env, Err.invalid_expr_ pos, err)

let pass =
  Naming_phase_pass.(top_down { identity with on_expr_ = Some on_expr_ })

let visitor = Naming_phase_pass.mk_visitor [pass]

let elab f ?init ?(env = Env.empty) elem =
  Tuple2.map_snd ~f:(Err.from_monoid ?init) @@ f env elem

let elab_fun_def ?init ?env elem = elab visitor#on_fun_def ?init ?env elem

let elab_typedef ?init ?env elem = elab visitor#on_typedef ?init ?env elem

let elab_module_def ?init ?env elem = elab visitor#on_module_def ?init ?env elem

let elab_gconst ?init ?env elem = elab visitor#on_gconst ?init ?env elem

let elab_class ?init ?env elem = elab visitor#on_class_ ?init ?env elem

let elab_program ?init ?env elem = elab visitor#on_program ?init ?env elem
