<?php

include("connection.php");

if($_SERVER["REQUEST_METHOD"] === "POST") {
    $username = $_POST['username'];
    $password = $_POST['password'];

    if(!empty($username) && !empty($password)) {
        $query = "INSERT INTO signup (username, password) VALUES('$username','$password')";
        $result = mysqli_query($connect, $query);

        if(!$result) {
            die("Failed to insert data.".mysqli_error($connect));
        }

        header('location:login.php');
    }
}
?>
