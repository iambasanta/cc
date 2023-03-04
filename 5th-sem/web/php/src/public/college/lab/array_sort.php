<?php
echo "using sort() function.</br>";
$numbers = array(3, 1, 4, 5, 2);
sort($numbers);
print_r($numbers);

echo "using asort() function.";
$assoc_array = array("Robin" => 99,  "Sunil" => 33, "Basanta" => 69);
asort($assoc_array);
print_r($assoc_array);

echo "using ksort() function.";
$assoc_array = array("John" => 25, "Jane" => 30, "Bob" => 20);
ksort($assoc_array);
print_r($assoc_array);

?>
