(*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

let build_property
    ~(ctx : Provider_context.t)
    ~(this_class : Shallow_decl_defs.shallow_class option)
    ({
       Shallow_decl_defs.sp_name = _;
       sp_xhp_attr;
       sp_type;
       sp_visibility = _;
       sp_flags;
     } :
      Shallow_decl_defs.shallow_prop) : Typing_defs.decl_ty =
  let is_xhp_attr = Option.is_some sp_xhp_attr in
  let no_auto_likes = Shallow_decl_defs.PropFlags.get_no_auto_likes sp_flags in
  if no_auto_likes then
    sp_type
  else
    Decl_enforceability_shallow.maybe_pessimise_type
      ~reason:(Typing_reason.Rpessimised_prop (Typing_defs.get_pos sp_type))
      ~is_xhp_attr
      ~this_class
      ctx
      sp_type

let build_constructor
    ({
       Shallow_decl_defs.sm_name = (fe_pos, _name);
       sm_type;
       sm_visibility = _;
       sm_deprecated;
       sm_flags = _;
       sm_attributes = _;
       sm_sort_text = _;
     } :
      Shallow_decl_defs.shallow_method) : Typing_defs.fun_elt =
  {
    Typing_defs.fe_module = None;
    fe_pos;
    fe_internal = false;
    fe_deprecated = sm_deprecated;
    fe_type = sm_type;
    fe_php_std_lib = false;
    fe_support_dynamic_type = false;
    fe_no_auto_dynamic = false;
    fe_no_auto_likes = false;
  }

let build_method
    ~(ctx : Provider_context.t)
    ~(this_class : Shallow_decl_defs.shallow_class option)
    ({
       Shallow_decl_defs.sm_name;
       sm_type;
       sm_visibility = _;
       sm_deprecated = _;
       sm_flags;
       sm_attributes;
       sm_sort_text = _;
     } :
      Shallow_decl_defs.shallow_method) : Typing_defs.fun_elt =
  let (pos, _id) = sm_name in
  let support_dynamic_type =
    Shallow_decl_defs.MethodFlags.get_support_dynamic_type sm_flags
  in
  let fe_no_auto_dynamic =
    Typing_defs.Attributes.mem
      Naming_special_names.UserAttributes.uaNoAutoDynamic
      sm_attributes
  in
  let fe_no_auto_likes =
    Typing_defs.Attributes.mem
      Naming_special_names.UserAttributes.uaNoAutoLikes
      sm_attributes
  in
  {
    Typing_defs.fe_module = None;
    fe_pos = pos;
    fe_internal = false;
    fe_deprecated = None;
    fe_type =
      (if
       (not fe_no_auto_dynamic)
       && Provider_context.implicit_sdt_for_class ctx this_class
      then
        Decl_enforceability_shallow.(
          pessimise_fun_type
            ~fun_kind:
              (if Shallow_decl_defs.MethodFlags.get_abstract sm_flags then
                Abstract_method
              else
                Concrete_method)
            ~this_class
            ~no_auto_likes:fe_no_auto_likes
            ctx
            pos
            sm_type)
      else
        sm_type);
    fe_php_std_lib = false;
    fe_support_dynamic_type = support_dynamic_type;
    fe_no_auto_dynamic;
    fe_no_auto_likes;
  }
