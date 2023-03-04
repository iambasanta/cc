<?php
$id= $_GET["id"];

include ("connection.php");
$name = $_POST["name"];
$email = $_POST["email"];
$phone = $_POST["phone"];
$college = $_POST["college"];

$sql = "UPDATE web SET name='$name',email='$email',college='$college',phone='$phone' WHERE id=".$id;

$result = mysqli_query($connect, $sql);

if(!$result){
    die("Failed to insert".mysqli_error($connect));
}

header('location:list.php');

?>
