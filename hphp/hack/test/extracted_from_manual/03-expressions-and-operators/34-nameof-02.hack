// @generated by hh_manual from manual/hack/03-expressions-and-operators/34-nameof.md
// @codegen-command : buck run fbcode//hphp/hack/src/hh_manual:hh_manual extract fbcode/hphp/hack/manual/hack/
class B {}
class C extends B {}
trait T {
    require extends B;
    public static function f(): void {
        var_dump(nameof T); // "T"
        var_dump(nameof self); // "D" (user of trait)
        var_dump(nameof parent); // "C" (parent of trait user, not B)
        var_dump(nameof static); // "E", receiver for ::f() in main
    }
}
class D extends C { use T; }
class E extends D {}

<<__EntryPoint>>
function main(): void {
  E::f();
}
