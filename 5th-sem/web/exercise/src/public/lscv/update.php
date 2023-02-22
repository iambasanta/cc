<?php
include "connection.php";

$id = $_GET["id"];

$name = $_POST["name"];
$quantity = $_POST["quantity"];

$query = "UPDATE foods SET name='$name',quantity='$quantity' WHERE id=".$id;

$result = mysqli_query($connect, $query);

if(!$result){
    die("Failed to update.");
}

header("location:list.php");
?>
