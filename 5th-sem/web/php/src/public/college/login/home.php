<?php
session_start();
if(isset($_SESSION["user_name"])){
    echo "<h1> Yay ! you are logged in. Welcome ".$_SESSION["user_name"]."<br>";
    echo "<a href='logout.php'>Logout</a>";
}else{
    header("location:login-form.php?err=true");
}

?>
