<?php

include ("connection.php");

$sql = "insert into web (name,email,college,phone) values('basanta','email@email.com','prime','9876543210')";

$result = mysqli_query($connect, $sql);

if(!$result){
    die("Failed to insert".mysqli_error($connect));
}

echo "value inserted!";
?>
