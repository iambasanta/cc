<?php
    session_start();
    if (isset($_SESSION["username"])) {
        echo "<h1>Yay! you are logged in ".$_SESSION["username"].".</h1>";
        echo "<a href='logout.php'>Log Out</a>";
    } else {
        header("location:login.php?err=true");
    }
?>
