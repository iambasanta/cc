<?php
$numbers = array(1, 2, 3, 4, 5);
print_r($numbers);

echo "\nusing array_shift() function.\n";
$first_element = array_shift($numbers);
print_r($first_element);

echo "\narray after array_shift()\n";
print_r($numbers);

echo "\nusing array_shift() function.\n";
$last_element = array_pop($numbers);
print_r($last_element);

echo "\narray after array_pop()\n";
print_r($numbers);

?>
