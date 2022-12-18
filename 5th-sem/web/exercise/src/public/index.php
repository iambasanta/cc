<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <title>Demo</title>
  </head>
    <style>
        body{
            display: grid;
            place-items: center;
            height: 100vh;
            margin: 0;
            font-family: sans-serif;
        }
    </style>
  <body>
    <?php 
        $language = "PHP";
        $learnt = false;

        if($learnt){
            $message = "Yay, I'm learning PHP.";
        }else{
            $message = "Whoss, I'm not learning PHP.";
        }
    ?>

    <h1>
    <?php echo $message; ?>!
    </h1>

  </body>
</html>
