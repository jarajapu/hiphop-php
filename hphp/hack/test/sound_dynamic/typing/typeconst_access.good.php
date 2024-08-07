<?hh
// Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.

<<__SupportDynamicType>>
abstract class HasteJSDep {
  abstract const type TIndex as int;
}

<<__SupportDynamicType>>
abstract final class SpinHelper {

  public static function getCompDepData<TDep as HasteJSDep with { type TIndex = TIndex }, TIndex as int>(
    TDep $dep
  ): int {
    $x = self::decode($dep);
    return $x[0];
  }

  private static function decode<TDep as HasteJSDep with { type TIndex = TIndex }, TIndex>(
    TDep $dep,
   ): vec<TIndex> {
    return vec[];
  }
}
