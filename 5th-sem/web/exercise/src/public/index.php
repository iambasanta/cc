<?php

$books = [
    [
        "name" => "Refactoring UI",
        "author" => "Adam Wathan",
        "releaseYear" => "2008",
        "purchaseUrl" => "https://www.refactoringui.com/",
    ],
    [
        "name" => "Clean Code",
        "author" => "Bob C. Martin",
        "releaseYear" => "2020",
        "purchaseUrl" => "https://www.amazon.com",
    ],
    [
        "name" => "Eloquent javascript",
        "author" => "Marjin Haverbeke",
        "releaseYear" => "2018",
        "purchaseUrl" => "https://www.amazon.com",
    ],
    [
        "name" => "Clean Architecture",
        "author" => "Bob C. Martin",
        "releaseYear" => "2017",
        "purchaseUrl" => "https://www.amazon.com",
    ],
];

$filteredBooks = array_filter($books, function ($book){
    return $book["releaseYear"] >= 1950 && $book["releaseYear"] <=2020;
});

require "index.view.php";
