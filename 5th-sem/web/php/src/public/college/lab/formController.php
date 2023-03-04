<?php
if($_SERVER['REQUEST_METHOD'] == 'POST'){
    $name = $_POST['name'];
    $email = $_POST['email'];
    $college = $_POST['college'];

    echo 'Name:'.$name . '</br>';
    echo 'Email:'.$email . '</br>';
    echo 'College:'.$college . '</br>';
}

