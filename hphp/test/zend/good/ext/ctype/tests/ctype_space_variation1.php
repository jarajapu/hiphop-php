<?hh
/* Prototype  : bool ctype_space(mixed $c)
 * Description: Checks for whitespace character(s)
 * Source code: ext/ctype/ctype.c
 */

/*
 * Pass different data types as $c argument to ctype_space() to test behaviour
 */

// get a class
class classA
{
    public function __toString() :mixed{
        return "\n\t\r";
    }
}
<<__EntryPoint>> function main(): void {
echo "*** Testing ctype_space() : usage variations ***\n";

$orig = setlocale(LC_CTYPE, "C");


// heredoc string
$heredoc = <<<EOT
 
EOT;

// get a resource variable
$fp = fopen(__FILE__, "r");

// unexpected values to be passed to $c argument
$inputs = vec[

       // int data
/*1*/  0,
       1,
       12345,
       -2345,

       // float data
/*5*/  10.5,
       -10.5,
       12.3456789000e10,
       12.3456789000E-10,
       .5,

       // null data
/*10*/ NULL,
       null,

       // boolean data
/*12*/ true,
       false,
       TRUE,
       FALSE,

       // empty data
/*16*/ "",
       '',
       vec[],

       // string data
/*19*/ "\n\t\r",
       ' ',
       $heredoc,

       // object data
/*22*/ new classA(),



       // resource variable
/*23*/ $fp
];

// loop through each element of $inputs to check the behavior of ctype_space()
$iterator = 1;
foreach($inputs as $input) {
    echo "\n-- Iteration $iterator --\n";
    var_dump( ctype_space($input) );
    $iterator++;
};

fclose($fp);

setlocale(LC_CTYPE, $orig);
echo "===DONE===\n";
}
