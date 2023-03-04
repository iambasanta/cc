<?php
include("connection.php");
$id= $_GET["id"];
$sql = "SELECT * FROM web WHERE id=".$id;

$result = mysqli_query($connect, $sql);
$row = mysqli_fetch_assoc($result);

?>

<form action="update.php?id=<?= $id ?>" method="POST">
    </br>
    Name : 
    <input type="text" name="name" value="<?= $row['name']?>" /></br>
    </br>
    Email : 
    <input type="text" name="email" value="<?= $row['email']?>" /></br>
    </br>
    Phone : 
    <input type="text" name="phone" value="<?= $row['phone']?>" /></br>
    </br>
    College : 
    <input type="text" name="college" value="<?= $row['college']?>" /></br>
    </br>

    <input type="submit" value="Update"/>
</form>
