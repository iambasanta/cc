<?php
if(isset($_GET['lgt'])){
    echo "You are logged out!";
}elseif(isset($_GET['err'])){
    echo "Credentials do not match our records!";
}
?>
<form action="loginController.php" method="POST">
Username :
<input type="text" name="username" />
</br>
</br>
Password :
<input type="password" name="password" />
</br>
</br>
<input type="submit" value="Login" />
</form>
