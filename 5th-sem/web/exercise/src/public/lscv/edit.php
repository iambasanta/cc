<?php

include "connection.php";
$id = $_GET["id"];

$query = "SELECT * FROM foods WHERE id=".$id;
$result = mysqli_query($connect, $query);

$row = mysqli_fetch_assoc($result);
?>

<form method="POST" action="update.php?id=<?php echo $id; ?>">
    Food name:
    <input type="text" name="name" value="<?php echo $row['name'] ?>"/>
    </br>
    </br>
    Food Quantity:
    <input type="number" name="quantity"  value="<?php echo $row['quantity'] ?>"/>
    </br>
    </br>
    <input type="submit" value="Update"/>
</form>
