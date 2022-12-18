<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <title>Demo</title>
  </head>
    <style>
    </style>
  <body>
    <h1> Recommanded books </h1>

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

        // function filter($items, $fn){
        //     $filteredBooks = [];
        //
        //     foreach ($items as $item){
        //         if($fn($item)){
        //             $filteredItems[] = $item;
        //         }
        //     }
        //
        //     return $filteredItems;
        //
        // }

        $filteredBooks = array_filter($books, function ($book){
            return $book["releaseYear"] => 1950 && $book["releaseYear"] <=2020;
        });
     ?>

    <ul>
        <?php foreach($filteredBooks as $book) : ?>
            <li> 
                <a href="<?= $book["purchaseUrl"] ?>">
                <?= $book["name"]?> (<?=$book["releaseYear"] ?>) - By <?= $book["author"] ?>
                </a>
             </li>
        <?php endforeach; ?>
    </ul>

  </body>
</html>
