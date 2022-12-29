<?php
include("connection.php");
$id= $_GET["id"];
$sql = "DELETE FROM web WHERE id=".$id;

$result = mysqli_query($connect, $sql);

if(!$result){
    die("Failed to insert".mysqli_error($connect));
}

header('location:list.php');

?>
