<?php
session_start();
include "connection.php";

if($_SERVER["REQUEST_METHOD"] === "POST"){
    $username_email = $_POST["username_email"];
    $password = $_POST["password"];

    $errors = [];

    if(empty($username_email)){
        $errors["username_email"] = "User name or email is required.";
    }

    if(empty($password)){
        $errors["password"] = "Password is required.";
    }

    if(empty($errors)){
        if(filter_var($username_email, FILTER_VALIDATE_EMAIL)){
            $query =  "SELECT * FROM users WHERE email = '$username_email' AND password = '$password'";
        }else{
            $query =  "SELECT * FROM users WHERE user_name = '$username_email' AND password = '$password'";
        }

        $result = mysqli_query($connect, $query);

        if(mysqli_num_rows($result) > 0){
            $_SESSION["user_name"] = $username_email;
            header("location:home.php");
        }else{
            $errors["failed"] = "Credentials do not match our record.";
        }

    }
}

require("login-form.php");

?>

