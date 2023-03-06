<?php
$animes = [
    1 => "Death Note",
    2 => "Full Metal Alchemist",
    3 => "Blade",
    4 => "Attack of Titan",
    5 => "Demon Slayer",
];

?>

<table border="1">
    <thead>
        <tr>
            <th>Sn</th>
            <th>Title</th>
        </tr>
    </thead>
    <tbody>
        <?php 
            foreach ($animes as $key => $value) {
                echo "<tr>";
                echo "<td>".$key."</td>";
                echo "<td>".$value."</td>";
                echo "</tr>";
            }
        ?>
    </tbody>
</table>
