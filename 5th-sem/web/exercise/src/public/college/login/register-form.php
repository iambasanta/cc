<form action="register.php" method="POST">
    </br>
    User Name : 
    <input type="text" name="user_name" /></br>
    <?php if(isset($errors["user_name"])) :?>
    <p style="color: red;"><?php echo $errors["user_name"]; ?></p>
    <?php endif; ?>
    </br>

    Email : 
    <input type="text" name="email" /></br>
    <?php if(isset($errors["email"])) :?>
    <p style="color: red;"><?php echo $errors["email"]; ?></p>
    <?php endif; ?>
    </br>

    Password : 
    <input type="password" name="password" /></br>
    <?php if(isset($errors["password"])) :?>
    <p style="color: red;"><?php echo $errors["password"]; ?></p>
    <?php endif; ?>
    </br>

    Confirm Password : 
    <input type="password" name="confirm_password" /></br>
    <?php if(isset($errors["confirm_password"])) :?>
    <p style="color: red;"><?php echo $errors["confirm_password"]; ?></p>
    <?php endif; ?>
    </br>

    <input type="submit" value="Register"/>
</form>
