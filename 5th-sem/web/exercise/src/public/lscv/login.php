<?php
    if (isset($_GET["lgt"])) {
        echo "You are logged out.</br>";
    } elseif (isset($_GET["err"])) {
        echo "Credentials do not match our record.";
    }
    
?>
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>Login Form</title>
        <script defer src="./validate.js" ></script>
    </head>
    <body>
        <form action="loginController.php" method="POST">
            Username:
            <input id="username" type="text" name="username"/>
            <?php if(isset($errors["username"])) :?>
                <p style="color:red;"><?php echo $errors["username"]; ?></p> 
            <?php endif; ?> 
            <span id="usernameError" style="color:red"></span>
            </br>
            </br>
            Password:
            <input id="password" type="password" name="password"/>
            <?php if(isset($errors["password"])) :?>
                <p style="color:red;"><?php echo $errors["password"]; ?></p> 
            <?php endif; ?> 
            <span id="passwordError" style="color: red;"></span>
            </br>
            </br>
            <input id="submitButton" type="submit" onclick="validateForm()" value="Login"/>
        </form>
    </body>
</html>
