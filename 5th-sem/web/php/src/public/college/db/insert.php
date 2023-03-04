<?php

include ("connection.php");
$name = $_POST["name"];
$email = $_POST["email"];
$phone = $_POST["phone"];
$college = $_POST["college"];

$sql = "INSERT INTO web (name,email,college,phone) VALUES('$name','$email','$college','$phone')";

$result = mysqli_query($connect, $sql);

if(!$result){
    die("Failed to insert".mysqli_error($connect));
}

header('location:list.php');

?>
