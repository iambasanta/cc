<?php
    if (isset($err)) {
        echo "Failed to register.";
    }
?>
<form action="registerController.php" method="POST">
    Username:
    <input type="text" name="username"/>
    <?php if(isset($errors["username"])) :?>
        <p style="color:red;"><?php echo $errors["username"]; ?></p> 
    <?php endif; ?> 
    </br>
    </br>
    Password:
    <input type="password" name="password"/>
    <?php if(isset($errors["password"])) :?>
        <p style="color:red;"><?php echo $errors["password"]; ?></p> 
    <?php endif; ?> 
    </br>
    </br>
    <input type="submit" value="Register"/>
</form>
