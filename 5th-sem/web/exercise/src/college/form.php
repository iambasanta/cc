<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <title>Form</title>
  </head>
  <body>
    <form action="FormController.php" method="POST">
      User name:<br />
        <input type="text" name="user_name" /><br />

        <?php if(isset($errors['user_name'])) :?>
        <p style="color:red;"> <?= $errors['user_name'] ?><p/>
        <?php endif; ?>

      Phone number:<br />
        <input type="number" name="phone" /><br />

      Email:<br />
      <input type="text" name="email" /><br />

      Gender:<br />
        <input type="radio" name="gender" value="male" /> Male
        <input type="radio" name="gender" value="female"/> Female
        <br />

      Hobbies:<br />
        <input type="checkbox" name="hobbies[]" value="guitar"> Playing Guitar
        <br />
        <input type="checkbox" name="hobbies[]" value="hiking"> Hiking
        <br />
        <input type="checkbox" name="hobbies[]" value="reading"> Reading
        <br />
        <br />

      <input type="submit" value="Submit" />
    </form>
  </body>
</html>
