<?php
$server = "db";
$username = "root";
$password = "root";
$db = "csit";

$connect = mysqli_connect($server,$username,$password,$db);

if(!$connect){
    die("connection failed!");
}
?>
