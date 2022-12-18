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
            "Refactoring UI",
            "Clean Code",
            "Think like a Programmer",
        ];
     ?>

    <ul>
        <?php foreach($books as $book) : ?>
        <li> <?= $book ?> </li>
        <?php endforeach; ?>
    </ul>

  </body>
</html>
