<?php
$server = "db";
$username = "root";
$password = "root";
$dbname = "lscv";

$connect = mysqli_connect($server, $username, $password, $dbname);

if(!$connect) {
    die("Connection failed.");
}
?>
