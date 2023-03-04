<?php

include "connection.php";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST["username"];
    $password = $_POST["password"];

    $errors = [];

    if(empty($username)) {
        $errors["username"] = "Username is required";
    }

    if(empty($password)) {
        $errors["password"] = "Password is required";
    }

    if(!empty($username) && !empty($password)) {
        $query = "INSERT INTO users (username, password) VALUES ('$username', '$password')";
        $result = mysqli_query($connect, $query);

        if($result) {
            header("location:login.php");
        } else {
            header("location:register.php?err=true");
        }

    }
}

require "register.php";
