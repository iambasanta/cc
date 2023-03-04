<?php
include "connection.php";

if($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST["name"];
    $quantity = $_POST["quantity"];

    if(!empty($name) && !empty($quantity)) {
        $query = "INSERT INTO foods (name,quantity) VALUES ('$name','$quantity')";
        $result = mysqli_query($connect, $query);

        if($result) {
            header("location:list.php");
        } else {
            echo "Failed to add food.";
        }
    }
}

?>

<form method="POST" action="">
    Food name:
    <input type="text" name="name"/>
    </br>
    </br>
    Food Quantity:
    <input type="number" name="quantity"/>
    </br>
    </br>
    <input type="submit" value="Add Food"/>
</form>
