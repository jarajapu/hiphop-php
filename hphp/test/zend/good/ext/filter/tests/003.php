<?php

<<__EntryPoint>>
function main() {
$get = $GLOBALS['_GET'];
parse_str("a=1&b=&c=3", &$get);
$GLOBALS['_GET'] = $get;
$_REQUEST = array_merge($_REQUEST, $_GET);
_filter_snapshot_globals();

$post = $GLOBALS['_POST'];
parse_str("d=4&e=5", &$post);
$GLOBALS['_POST'] = $post;
$_REQUEST = array_merge($_REQUEST, $_POST);
_filter_snapshot_globals();
echo $_GET['a'];
echo $_GET['b'];
echo $_GET['c'];
echo $_POST['d'];
echo $_POST['e'];
echo "\n";
echo $_REQUEST['a'];
echo $_REQUEST['b'];
echo $_REQUEST['c'];
echo $_REQUEST['d'];
echo $_REQUEST['e'];
}
