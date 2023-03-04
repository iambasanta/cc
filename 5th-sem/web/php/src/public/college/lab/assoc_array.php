<?php
$assoc_array = array(
    "first_name" => "John",
    "last_name" => "Doe",
    "age" => 25
);

echo "<h3>Displaying associative array in html table.</h3>";
echo "<table border='1'>";
echo "<tr><th>Key</th><th>Value</th></tr>";
foreach ($assoc_array as $key => $value) {
    echo "<tr><td>" . $key . "</td><td>" . $value . "</td></tr>";
}
echo "</table>";

?>
