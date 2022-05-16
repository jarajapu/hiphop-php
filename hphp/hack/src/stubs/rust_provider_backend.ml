(*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

type t

let make _ = failwith "unimplemented"

let push_local_changes _ : unit = failwith "unimplemented"

let pop_local_changes _ : unit = failwith "unimplemented"

module Decl = struct
  let direct_decl_parse_and_cache _ _ = failwith "unimplemented"

  let get_fun _ _ = failwith "unimplemented"

  let get_shallow_class _ _ = failwith "unimplemented"

  let get_typedef _ _ = failwith "unimplemented"

  let get_gconst _ _ = failwith "unimplemented"

  let get_module _ _ = failwith "unimplemented"

  let get_folded_class _ _ = failwith "unimplemented"
end

module File = struct
  type file_type =
    | Disk of string
    | Ide of string

  let get _ _ = failwith "unimplemented"

  let get_contents _ _ = failwith "unimplemented"

  let provide_file_for_tests _ _ _ = failwith "unimplemented"

  let provide_file_for_ide _ _ _ = failwith "unimplemented"

  let provide_file_hint _ _ _ = failwith "unimplemented"

  let remove_batch _ _ = failwith "unimplemented"
end

module Naming = struct
  module Types = struct
    let add _ _ _ = failwith "unimplemented"

    let get_pos _ _ _ = failwith "unimplemented"

    let remove_batch _ _ _ = failwith "unimplemented"

    let get_canon_name _ _ _ = failwith "unimplemented"
  end

  module Funs = struct
    let add _ _ _ = failwith "unimplemented"

    let get_pos _ _ _ = failwith "unimplemented"

    let remove_batch _ _ _ = failwith "unimplemented"

    let get_canon_name _ _ _ = failwith "unimplemented"
  end

  module Consts = struct
    let add _ _ _ = failwith "unimplemented"

    let get_pos _ _ _ = failwith "unimplemented"

    let remove_batch _ _ _ = failwith "unimplemented"
  end

  module Modules = struct
    let add _ _ _ = failwith "unimplemented"

    let get_pos _ _ _ = failwith "unimplemented"

    let remove_batch _ _ _ = failwith "unimplemented"
  end

  let get_filenames_by_hash _ _ _ = failwith "unimplemented"
end
