<head>
    <style>
    table, td, th{
        border: 1px solid black;
    }
    </style>
</head>

<table>
    <thead>
        <th>Sn</th>
        <th>Name</th>
        <th>Email</th>
        <th>Phone</th>
        <th>College</th>
    </thead>
    <tbody >
<?php 
include("connection.php");
$sql = "SELECT * FROM web";
$result = mysqli_query($connect,$sql);
if(mysqli_num_rows($result)>0){
    $sn = 1;
    while($row = mysqli_fetch_assoc($result)){
        echo "<tr>";
        echo "<td>".$sn."</td>";
        echo "<td>".$row["name"]."</td>";
        echo "<td>".$row["email"]."</td>";
        echo "<td>".$row["phone"]."</td>";
        echo "<td>".$row["college"]."</td>";
        echo "</tr>";
        $sn++;
    }

}
?>
    </tbody>
</table> 
