<form action="login.php" method="POST">
    <?php if(isset($errors["failed"])) :?>
    <p style="color: red;"><?php echo $errors["failed"]; ?></p>
    <?php endif; ?>
    </br>
    User Name/ Email : 
    <input type="text" name="username_email" /></br>
    <?php if(isset($errors["username_email"])) :?>
    <p style="color: red;"><?php echo $errors["username_email"]; ?></p>
    <?php endif; ?>
    </br>

    Password : 
    <input type="password" name="password" /></br>
    <?php if(isset($errors["password"])) :?>
    <p style="color: red;"><?php echo $errors["password"]; ?></p>
    <?php endif; ?>
    </br>

    <input type="submit" value="Login"/>
</form>
