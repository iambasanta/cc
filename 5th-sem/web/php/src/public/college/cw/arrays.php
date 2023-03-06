<?php
$indexedArray = [1,2,3,4,5];
$associativeArray = [
    1 => "Rust",
    2 => "C",
    3 => "PHP"
];

$multiDimensionalArray = [
    [
        "title" => "Blade",
        "category" => "Action"
    ],
    [
        "title" => "Death Note",
        "category" => "Crime"
    ]
];

var_dump($indexedArray);
var_dump($associativeArray);
var_dump($multiDimensionalArray);

?>
