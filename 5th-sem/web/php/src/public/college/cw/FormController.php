<?php

if($_SERVER['REQUEST_METHOD'] === 'POST'){
   validateRequest($_POST);
   dd($_POST);
}else{
    header('location: ./form.php');
    exit;
}

function validateRequest($request){
    $errors = [];
    $user_name = $request['user_name'];
    $phone = $request['phone'];
    $email = $request['email'];

    if(empty($user_name)){
        $errors['user_name'] = 'User name is required.';
        header('location: ./form.php');
        exit;
    }elseif(!empty($user_name) && (!preg_match("/^[prime]\w[0-9]*/i",$user_name))){
        $errors['user_name'] = 'User name must start with prefix prime.';
        header('location: ./form.php');
        exit;
    }

    if(empty($phone)){
        $errors['phone'] = 'Phone number is required.';
        header('location: ./form.php');
        exit;
    }elseif(!empty($phone) && (!preg_match("/^[9][7-8][0-9]{5,15}$/", $phone))){
        $errors['phone'] = 'Phone number must start with 97 or 98.';
        header('location: ./form.php');
        exit;
    }

    if(empty($email)){
        $errors['email'] = 'Email is required.';
        header('location: ./form.php');
        exit;
    }elseif(!filter_var($email , FILTER_VALIDATE_EMAIL)){
        $errors['email'] = "Invalid email address.";
        header('location: ./form.php');
        exit;
    }

    if(empty($data['gender'])){
        $errors['gender'] = 'Gender is required';
        header('location: ./form.php');
        exit;
    }

    if(empty($data['hobbies'])){
        $errors['hobbies'] = 'Select your hobbies.';
        header('location: ./form.php');
        exit;
    }
}

function dd($value){
    echo "<pre>";
    var_dump($value);
    echo "</pre>";
    die();
}

// redirect page
header('location: form.php');
exit;
