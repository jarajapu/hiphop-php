<?hh /* -*- php -*- */
/**
 * Copyright (c) 2014, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 */

const int PHP_ROUND_HALF_UP = 1;
const int PHP_ROUND_HALF_DOWN = 2;
const int PHP_ROUND_HALF_EVEN = 3;
const int PHP_ROUND_HALF_ODD = 4;

const float M_PI = 3.14159265358979323846;
const float M_E = 2.7182818284590452354;
const float M_LOG2E = 1.4426950408889634074;
const float M_LOG10E = 0.43429448190325182765;
const float M_LN2 = 0.69314718055994530942;
const float M_LN10 = 2.30258509299404568402;
const float M_PI_2 = 1.57079632679489661923;
const float M_PI_4 = 0.78539816339744830962;
const float M_1_PI = 0.31830988618379067154;
const float M_2_PI = 0.63661977236758134308;
const float M_SQRTPI = 1.77245385090551602729;
const float M_2_SQRTPI = 1.12837916709551257390;
const float M_SQRT2 = 1.41421356237309504880;
const float M_SQRT3 = 1.73205080756887729352;
const float M_SQRT1_2 = 0.70710678118654752440;
const float M_LNPI = 1.14472988584940017414;
const float M_EULER = 0.57721566490153286061;

<<__PHPStdLib>>
function pi()[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function min($value, ...$args)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function max($value, ...$args)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function abs($number)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function is_finite(float $val)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function is_infinite(float $val)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function is_nan(float $val)[]: bool;
<<__PHPStdLib>>
function ceil($value)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function floor($value)[]: float;
<<__PHPStdLib>>
function round(
  $val,
  int $precision = 0,
  int $mode = 1,
)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function deg2rad(float $number)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function rad2deg(float $number)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function decbin($number)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function decoct($number)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function bindec($binary_string)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function hexdec($hex_string)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function octdec($octal_string)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function base_convert(
  $number,
  int $frombase,
  int $tobase,
)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function pow($base, $exp)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function exp(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function expm1(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function log10(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function log1p(float $number)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function log(float $arg, float $base = 0.0)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function cos(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function cosh(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function sin(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function sinh(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function tan(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function tanh(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function acos(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function acosh(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function asin(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function asinh(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function atan(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function atanh(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function atan2(float $y, float $x)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function hypot(float $x, float $y)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function fmod(float $x, float $y)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function sqrt(float $arg)[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function getrandmax()[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function srand($seed = null): HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function rand(
  int $min = 0,
  $max = -1, /* getrandmax */
): HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function mt_getrandmax()[]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function mt_srand($seed = null): HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function mt_rand(
  int $min = 0,
  $max = -1, /* mt_getrandmax */
)[leak_safe]: HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function lcg_value(): HH\FIXME\MISSING_RETURN_TYPE;
<<__PHPStdLib>>
function intdiv(int $numerator, int $denominator)[]: int;
