(*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

type half_open_one_based = {
  filename: string;  (** absolute *)
  line: int;  (** 1-based *)
  char_start: int;  (** 1-based *)
  char_end: int;  (** 1-based *)
}

(** Produced by "hh --ide-find-refs-by-symbol" and parsed by clientLsp *)
module IdeShellout : sig
  val to_string : (string * Pos.absolute) list -> string

  val from_string_exn : string -> half_open_one_based list
end

(** Used "hh --find-refs --json" and read by HackAst and other tools *)
module HackAst : sig
  val to_string : (string * Pos.absolute) list -> string
end

(** Used by "hh --find-refs" *)
module CliHumanReadable : sig
  val print_results : (string * Pos.absolute) list -> unit
end

(** CliArgs is produced by clientLsp when it invokes "hh --ide-find-refs-by-symbol <args>"
and consumed by clientArgs when it parses that argument. *)
module CliArgs : sig
  type t = {
    symbol_name: string;
    action: SearchTypes.Find_refs.action;
  }

  val to_string : t -> string

  val from_string_exn : string -> t
end