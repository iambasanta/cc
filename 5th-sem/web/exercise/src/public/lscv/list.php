<?php
    echo "<a href='add.php'>Add Food</a>"
?>
<table border="1">
    <tr>
        <th>SN</th>
        <th>Food Name</th>
        <th>Quantity</th>
        <th>Action</th>
    </tr>

    <?php
    include "connection.php";
    $query = "SELECT * FROM foods";
    $result = mysqli_query($connect, $query);
    if(mysqli_num_rows($result) >0){
        $sn = 1;
        while($row = mysqli_fetch_assoc($result)){
            echo "<tr>";
            echo "<td>".$sn."</td>";
            echo "<td>".$row["name"]."</td>";
            echo "<td>".$row["quantity"]."</td>";
            echo "<td><a href='edit.php?id=".$row["id"]."'>Edit</a> || <a href='delete.php?id=".$row["id"]."'>Delete</a> </td>";
            echo "</tr>";
            $sn++;
        }
    }
    ?>
</table>
