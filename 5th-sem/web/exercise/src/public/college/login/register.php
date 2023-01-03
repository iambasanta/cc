<?php
include "connection.php";

if($_SERVER["REQUEST_METHOD"] === "POST"){
    $user_name = $_POST["user_name"];
    $email = $_POST["email"];
    $password = $_POST["password"];
    $confirm_password = $_POST["confirm_password"];

    $errors = [];

    if(empty($user_name)){
        $errors["user_name"] = "User name is required.";
    }else{
        $query = "SELECT * FROM users WHERE user_name= '$user_name'";
        $result = mysqli_query($connect, $query);

        if(mysqli_num_rows($result) > 0){
            $errors["user_name"] = "User name is already taken.";
        }
    }

    if(empty($email)){
        $errors["email"] = "Email is required.";
    }else{
        $query = "SELECT * FROM users WHERE email= '$email'";
        $result = mysqli_query($connect, $query);

        if(mysqli_num_rows($result) > 0){
            $errors["email"] = "Email is already in use.";
        }
    }

    if(empty($password)){
        $errors["password"] = "Password is required.";
    }

    if(empty($confirm_password)){
        $errors["confirm_password"] = "Confirm password is required.";
    }

    if(!empty($password) && !empty($confirm_password)){
        if($password !== $confirm_password){
            $errors["confirm_password"] = "The password confirmation does not match.";
        }
    }

    if(empty($errors)){
        $query = "INSERT INTO users (user_name,email,password) VALUES('$user_name','$email','$password')";
        $result = mysqli_query($connect, $query);

        if(!$result){
            die("Failed to insert data.".mysqli_error($connect));
        }

        header("location:login-form.php");
    }
}

require("register-form.php");
?>
