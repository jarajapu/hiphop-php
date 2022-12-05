(*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)
open Hh_prelude
open Common
module Err = Naming_phase_error
module SN = Naming_special_names

module Env = struct
  let tparams
      Naming_phase_env.{ elab_happly_hint = Elab_happly_hint.{ tparams; _ }; _ }
      =
    tparams

  let in_mode
      Naming_phase_env.{ elab_happly_hint = Elab_happly_hint.{ in_mode; _ }; _ }
      =
    in_mode

  let add_tparams ps init =
    List.fold
      ps
      ~f:(fun acc Aast.{ tp_name = (_, nm); _ } -> SSet.add nm acc)
      ~init

  let extend_tparams t ps =
    let elab_happly_hint = t.Naming_phase_env.elab_happly_hint in
    let tparams =
      add_tparams ps elab_happly_hint.Naming_phase_env.Elab_happly_hint.tparams
    in
    let elab_happly_hint =
      Naming_phase_env.Elab_happly_hint.{ elab_happly_hint with tparams }
    in
    Naming_phase_env.{ t with elab_happly_hint }

  let in_class t Aast.{ c_mode; c_tparams; _ } =
    let elab_happly_hint =
      Naming_phase_env.Elab_happly_hint.
        { in_mode = c_mode; tparams = add_tparams c_tparams SSet.empty }
    in
    Naming_phase_env.{ t with elab_happly_hint }

  let in_fun_def t Aast.{ fd_fun; fd_mode; _ } =
    let elab_happly_hint =
      Naming_phase_env.Elab_happly_hint.
        {
          in_mode = fd_mode;
          tparams = add_tparams fd_fun.Aast.f_tparams SSet.empty;
        }
    in
    Naming_phase_env.{ t with elab_happly_hint }

  let in_typedef t Aast.{ t_tparams; t_mode; _ } =
    let elab_happly_hint =
      Naming_phase_env.Elab_happly_hint.
        { in_mode = t_mode; tparams = add_tparams t_tparams SSet.empty }
    in
    Naming_phase_env.{ t with elab_happly_hint }

  let in_gconst t Aast.{ cst_mode; _ } =
    let elab_happly_hint =
      Naming_phase_env.Elab_happly_hint.
        { in_mode = cst_mode; tparams = SSet.empty }
    in
    Naming_phase_env.{ t with elab_happly_hint }

  let in_module_def t Aast.{ md_mode; _ } =
    let elab_happly_hint =
      Naming_phase_env.Elab_happly_hint.
        { in_mode = md_mode; tparams = SSet.empty }
    in
    Naming_phase_env.{ t with elab_happly_hint }
end

type canon_result =
  | Concrete of Aast.hint
  | This of Pos.t
  | Classname of Pos.t
  | Wildcard of Pos.t
  | Tycon of Pos.t * string
  | Typaram of string
  | Varray of Pos.t
  | Darray of Pos.t
  | Vec_or_dict of Pos.t
  | CanonErr of Naming_error.t

(* A number of hints are represented by `Happly` after lowering; we elaborate
   to the canonical representation here taking care to separate the result
   so we can apply subsequent validation of the hint based on where it appeared *)
let canonical_tycon typarams (pos, name) =
  if String.equal name SN.Typehints.int then
    Concrete (pos, Aast.(Hprim Tint))
  else if String.equal name SN.Typehints.bool then
    Concrete (pos, Aast.(Hprim Tbool))
  else if String.equal name SN.Typehints.float then
    Concrete (pos, Aast.(Hprim Tfloat))
  else if String.equal name SN.Typehints.string then
    Concrete (pos, Aast.(Hprim Tstring))
  else if String.equal name SN.Typehints.darray then
    Darray pos
  else if String.equal name SN.Typehints.varray then
    Varray pos
  (* TODO[mjt] `vec_or_dict` is currently special cased since the canonical representation
     requires us to have no arity mismatches or throw away info. We do not use that repr here
     to avoid having to do so. Ultimately, we should remove that special case *)
  else if
    String.(
      equal name SN.Typehints.varray_or_darray
      || equal name SN.Typehints.vec_or_dict)
  then
    Vec_or_dict pos
  else if String.equal name SN.Typehints.void then
    Concrete (pos, Aast.(Hprim Tvoid))
  else if String.equal name SN.Typehints.noreturn then
    Concrete (pos, Aast.(Hprim Tnoreturn))
  else if String.equal name SN.Typehints.null then
    Concrete (pos, Aast.(Hprim Tnull))
  else if String.equal name SN.Typehints.num then
    Concrete (pos, Aast.(Hprim Tnum))
  else if String.equal name SN.Typehints.resource then
    Concrete (pos, Aast.(Hprim Tresource))
  else if String.equal name SN.Typehints.arraykey then
    Concrete (pos, Aast.(Hprim Tarraykey))
  else if String.equal name SN.Typehints.mixed then
    Concrete (pos, Aast.Hmixed)
  else if String.equal name SN.Typehints.nonnull then
    Concrete (pos, Aast.Hnonnull)
  else if String.equal name SN.Typehints.nothing then
    Concrete (pos, Aast.Hnothing)
  else if String.equal name SN.Typehints.dynamic then
    Concrete (pos, Aast.Hdynamic)
  else if String.equal name SN.Typehints.this then
    This pos
  else if String.equal name SN.Typehints.wildcard then
    Wildcard pos
  else if
    String.(
      equal name ("\\" ^ SN.Typehints.void)
      || equal name ("\\" ^ SN.Typehints.null)
      || equal name ("\\" ^ SN.Typehints.noreturn)
      || equal name ("\\" ^ SN.Typehints.int)
      || equal name ("\\" ^ SN.Typehints.bool)
      || equal name ("\\" ^ SN.Typehints.float)
      || equal name ("\\" ^ SN.Typehints.num)
      || equal name ("\\" ^ SN.Typehints.string)
      || equal name ("\\" ^ SN.Typehints.resource)
      || equal name ("\\" ^ SN.Typehints.mixed)
      || equal name ("\\" ^ SN.Typehints.nonnull)
      || equal name ("\\" ^ SN.Typehints.arraykey)
      || equal name ("\\" ^ SN.Typehints.nothing))
  then
    CanonErr (Naming_error.Primitive_top_level pos)
  (* TODO[mjt] why wouldn't be have a fully qualified name here? *)
  else if String.(equal name SN.Classes.cClassname || equal name "classname")
  then
    Classname pos
  else if SSet.mem name typarams then
    Typaram name
  else
    Tycon (pos, name)

(* TODO[mjt] should we really be special casing `darray`? *)
let canonicalise_darray in_mode hint_pos pos hints =
  match hints with
  | [] ->
    let err =
      if not @@ FileInfo.is_hhi in_mode then
        Some (Err.naming @@ Naming_error.Too_few_type_arguments hint_pos)
      else
        None
    in
    let any = (pos, Aast.Hany) in
    Ok ((hint_pos, Aast.Happly ((pos, SN.Collections.cDict), [any; any])), err)
  | [_] ->
    let err =
      if not @@ FileInfo.is_hhi in_mode then
        Some (Err.naming @@ Naming_error.Too_few_type_arguments hint_pos)
      else
        None
    in
    Ok ((hint_pos, Aast.Hany), err)
  | [key_hint; val_hint] ->
    Ok
      ( ( hint_pos,
          Aast.Happly ((pos, SN.Collections.cDict), [key_hint; val_hint]) ),
        None )
  | _ ->
    let err = Err.naming @@ Naming_error.Too_many_type_arguments hint_pos in
    Error ((hint_pos, Aast.Hany), err)

(* TODO[mjt] should we really be special casing `varray`? *)
let canonicalise_varray in_mode hint_pos pos hints =
  match hints with
  | [] ->
    let err =
      if not @@ FileInfo.is_hhi in_mode then
        Some (Err.naming @@ Naming_error.Too_few_type_arguments hint_pos)
      else
        None
    in
    let any = (pos, Aast.Hany) in
    Ok ((hint_pos, Aast.Happly ((pos, SN.Collections.cVec), [any])), err)
  | [val_hint] ->
    Ok ((hint_pos, Aast.Happly ((pos, SN.Collections.cVec), [val_hint])), None)
  | _ ->
    let err = Err.naming @@ Naming_error.Too_many_type_arguments hint_pos in
    Error ((hint_pos, Aast.Hany), err)

(* TODO[mjt] should we really be special casing `vec_or_dict` both in
   its representation and error handling? *)
let canonicalise_vec_or_dict in_mode hint_pos pos hints =
  match hints with
  | [] ->
    let err =
      if not @@ FileInfo.is_hhi in_mode then
        Some (Err.naming @@ Naming_error.Too_few_type_arguments hint_pos)
      else
        None
    in
    let any = (pos, Aast.Hany) in
    Ok ((hint_pos, Aast.Hvec_or_dict (None, any)), err)
  | [val_hint] -> Ok ((hint_pos, Aast.Hvec_or_dict (None, val_hint)), None)
  | [key_hint; val_hint] ->
    Ok ((hint_pos, Aast.Hvec_or_dict (Some key_hint, val_hint)), None)
  | _ ->
    let err = Err.naming @@ Naming_error.Too_many_type_arguments hint_pos in
    Error ((hint_pos, Aast.Hany), err)

(* After lowering many hints are represented as `Happly(...,...)`. Here
   we canonicalise the representation of type constructor then handle
   errors and further elaboration *)
let canonicalize_happly in_mode tparams hint_pos tycon hints =
  match canonical_tycon tparams tycon with
  (* The hint was malformed *)
  | CanonErr err -> Error ((hint_pos, Aast.Herr), Err.naming err)
  (* The type constructors canonical representation is a concrete type *)
  | Concrete (pos, hint_) ->
    (* We can't represent a concrete type applied to other types
       so we raise an error here *)
    let err_opt =
      if not @@ List.is_empty hints then
        Some (Err.naming @@ Naming_error.Unexpected_type_arguments pos)
      else
        None
    in
    Ok ((hint_pos, hint_), err_opt)
  (* The type constructors corresponds to an in-scope type parameter *)
  | Typaram name ->
    let hint_ = Aast.Habstr (name, hints) in
    Ok ((hint_pos, hint_), None)
  (* The type constructors canonical representation is `Happly` but
     additional elaboration / validation is required *)
  | This pos ->
    let err_opt =
      if not @@ List.is_empty hints then
        Some (Err.naming @@ Naming_error.This_no_argument hint_pos)
      else
        None
    in
    Ok ((pos, Aast.Hthis), err_opt)
  | Wildcard pos ->
    if not (List.is_empty hints) then
      let err =
        Err.naming
        @@ Naming_error.Tparam_applied_to_type
             { pos = hint_pos; tparam_name = SN.Typehints.wildcard }
      in
      Error ((hint_pos, Aast.Herr), err)
    else
      Ok ((hint_pos, Aast.Happly ((pos, SN.Typehints.wildcard), [])), None)
  | Classname pos ->
    (* TODO[mjt] currently if `classname` is not applied to exactly
       one type parameter, it canonicalizes to `Hprim Tstring`.
       Investigate why this happens and if we can delay treatment to
       typing *)
    (match hints with
    | [_] ->
      let hint_ = Aast.Happly ((pos, SN.Classes.cClassname), hints) in
      Ok ((hint_pos, hint_), None)
    | _ ->
      Ok
        ( (hint_pos, Aast.(Hprim Tstring)),
          Some (Err.naming @@ Naming_error.Classname_param pos) ))
  | Darray pos -> canonicalise_darray in_mode hint_pos pos hints
  | Varray pos -> canonicalise_varray in_mode hint_pos pos hints
  | Vec_or_dict pos -> canonicalise_vec_or_dict in_mode hint_pos pos hints
  (* The type constructors canonical representation is `Happly` *)
  | Tycon (pos, tycon) ->
    let hint_ = Aast.Happly ((pos, tycon), hints) in
    Ok ((hint_pos, hint_), None)

let on_typedef (env, t, err) =
  Naming_phase_pass.Cont.next (Env.in_typedef env t, t, err)

let on_gconst (env, cst, err) =
  Naming_phase_pass.Cont.next (Env.in_gconst env cst, cst, err)

let on_fun_def (env, fd, err) =
  Naming_phase_pass.Cont.next (Env.in_fun_def env fd, fd, err)

let on_module_def (env, md, err) =
  Naming_phase_pass.Cont.next (Env.in_module_def env md, md, err)

let on_class_ (env, c, err) =
  Naming_phase_pass.Cont.next (Env.in_class env c, c, err)

let on_method_ (env, m, err) =
  let env = Env.extend_tparams env m.Aast.m_tparams in
  Naming_phase_pass.Cont.next (env, m, err)

let on_tparam (env, tp, err) =
  (* TODO[mjt] do we want to maintain the HKT code? *)
  let env = Env.extend_tparams env tp.Aast.tp_parameters in
  Naming_phase_pass.Cont.next (env, tp, err)

let on_hint (env, hint, err_acc) =
  let res =
    match hint with
    | (hint_pos, Aast.Happly (tycon, hints)) ->
      canonicalize_happly
        (Env.in_mode env)
        (Env.tparams env)
        hint_pos
        tycon
        hints
    | _ -> Ok (hint, None)
  in
  match res with
  | Ok (hint, err_opt) ->
    let err =
      Option.value_map err_opt ~default:err_acc ~f:(fun err -> err :: err_acc)
    in
    Naming_phase_pass.Cont.next (env, hint, err)
  | Error (hint, err) ->
    Naming_phase_pass.Cont.finish (env, hint, err :: err_acc)

let pass =
  Naming_phase_pass.(
    top_down
      {
        identity with
        on_typedef = Some on_typedef;
        on_gconst = Some on_gconst;
        on_fun_def = Some on_fun_def;
        on_module_def = Some on_module_def;
        on_class_ = Some on_class_;
        on_method_ = Some on_method_;
        on_tparam = Some on_tparam;
        on_hint = Some on_hint;
      })
