<?php
include "connection.php";

$id = $_GET["id"];

$query = "DELETE FROM foods WHERE id=".$id;

$result = mysqli_query($connect, $query);

if(!$result){
    die("Failed to update.");
}

header("location:list.php");
?>
