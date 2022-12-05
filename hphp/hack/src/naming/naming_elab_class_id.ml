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

  val set_in_class : t -> in_class:bool -> t

  val in_class : t -> bool
end = struct
  type t = { in_class: bool }

  let empty = { in_class = false }

  let set_in_class _ ~in_class = { in_class }

  let in_class { in_class } = in_class
end

let on_class_ (env, c, err) =
  Naming_phase_pass.Cont.next (Env.set_in_class env ~in_class:true, c, err)

(* The attributes applied to a class exist outside the current class so
   references to `self` are invalid *)
let on_class_c_user_attributes (env, c_user_attributes, err_acc) =
  Naming_phase_pass.Cont.next
    (Env.set_in_class env ~in_class:false, c_user_attributes, err_acc)

(* The lowerer will give us CIexpr (Id  _ | Lvar _ ); here we:
      - convert CIexpr(_,_,Id _) to CIparent, CIself, CIstatic and CI.
      - convert CIexpr(_,_,Lvar $this) to CIexpr(_,_,This)

      If there is a CIexpr with anything other than an Lvar or This after this
      elaboration step, it is an error and will be raised in subsequent
      validation passes

      TODO[mjt] We're overriding `on_class` rather than `on_class_` since
      the legacy code mangles positions by using the inner `class_id_` position
      in the output `class_id` tuple. This looks to be erroneous.
*)
let on_class_id (env, class_id, err_acc) =
  let in_class = Env.in_class env in
  let (class_id, err_opt) =
    match class_id with
    (* TODO[mjt] if we don't expect these from lowering should we refine the
       NAST repr? *)
    | (_, _, Aast.(CIparent | CIself | CIstatic | CI _)) -> (class_id, None)
    | (_, _, Aast.(CIexpr (_, expr_pos, Id (id_pos, cname)))) ->
      if String.equal cname SN.Classes.cParent then
        if not in_class then
          ( ((), expr_pos, Aast.CI (expr_pos, SN.Classes.cUnknown)),
            Some (Err.typing @@ Typing_error.Primary.Parent_outside_class id_pos)
          )
        else
          (((), expr_pos, Aast.CIparent), None)
      else if String.equal cname SN.Classes.cSelf then
        if not in_class then
          ( ((), expr_pos, Aast.CI (expr_pos, SN.Classes.cUnknown)),
            Some (Err.typing @@ Typing_error.Primary.Self_outside_class id_pos)
          )
        else
          (((), expr_pos, Aast.CIself), None)
      else if String.equal cname SN.Classes.cStatic then
        if not in_class then
          ( ((), expr_pos, Aast.CI (expr_pos, SN.Classes.cUnknown)),
            Some (Err.typing @@ Typing_error.Primary.Static_outside_class id_pos)
          )
        else
          (((), expr_pos, Aast.CIstatic), None)
      else
        (((), expr_pos, Aast.CI (expr_pos, cname)), None)
    | (_, _, Aast.(CIexpr (_, expr_pos, Lvar (lid_pos, lid))))
      when String.equal (Local_id.to_string lid) SN.SpecialIdents.this ->
      (* TODO[mjt] why is `$this` valid outside a class? *)
      (Aast.((), expr_pos, CIexpr ((), lid_pos, This)), None)
    | (_, _, (Aast.(CIexpr (_, expr_pos, _)) as class_id_)) ->
      (((), expr_pos, class_id_), None)
  in
  let err =
    Option.value_map ~default:err_acc ~f:(Err.Free_monoid.plus err_acc) err_opt
  in
  Naming_phase_pass.Cont.next (env, class_id, err)

let pass =
  Naming_phase_pass.(
    top_down
      {
        identity with
        on_class_ = Some on_class_;
        on_class_c_user_attributes = Some on_class_c_user_attributes;
        on_class_id = Some on_class_id;
      })

let visitor = Naming_phase_pass.mk_visitor [pass]

let elab f ?init ?(env = Env.empty) elem =
  Tuple2.map_snd ~f:(Err.from_monoid ?init) @@ f env elem

let elab_fun_def ?init ?env elem = elab visitor#on_fun_def ?init ?env elem

let elab_typedef ?init ?env elem = elab visitor#on_typedef ?init ?env elem

let elab_module_def ?init ?env elem = elab visitor#on_module_def ?init ?env elem

let elab_gconst ?init ?env elem = elab visitor#on_gconst ?init ?env elem

let elab_class ?init ?env elem = elab visitor#on_class_ ?init ?env elem

let elab_program ?init ?env elem = elab visitor#on_program ?init ?env elem
