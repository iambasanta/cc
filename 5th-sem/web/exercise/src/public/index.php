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
                "releaseYear" => "2008",
                "purchaseUrl" => "https://www.refactoringui.com/",
            ],
            [
                "name" => "Clean Code",
                "releaseYear" => "2020",
                "purchaseUrl" => "https://www.amazon.com",
            ],
            [
                "name" => "Eloquent javascript",
                "releaseYear" => "2018",
                "purchaseUrl" => "https://www.amazon.com",
            ],
        ];
     ?>

    <ul>
        <?php foreach($books as $book) : ?>
        <li> 
            <a href="<?= $book["purchaseUrl"] ?>">
                <?= $book["name"]?> (<?=$book["releaseYear"] ?>)
            </a>
         </li>
        <?php endforeach; ?>
    </ul>

  </body>
</html>
