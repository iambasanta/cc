<?php
session_start();

if(isset($_SESSION['username'])){
    echo "<h1> YAY! you are logged in.</h1>";
    echo "<a href='logout.php'>Logout</a>";
}else{
    header("location:login.php?err=true");
}
?>
