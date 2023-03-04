<?php
if($_SERVER['REQUEST_METHOD'] == 'POST'){
    $results = [];
    $number = $_POST['number'];

    if(isPrime($number)){
        $results['isprime'] = $number.' is prime number.';
    }else {
        $results['isprime'] = $number.' is not a prime number.';
    }
}

function isPrime($num){
    if($num < 2){
        return false;
    }
    for($i = 2; $i <= sqrt($num); $i++){
        if($num % $i == 0){
            return false;
        }
    }
    return true;
}
?>

<form action="<?php $_SERVER['PHP_SELF'];?>" method="POST">
    Enter a number: <input type="number" name="number">
    <input type="submit" value="CHECK">
    <?php if(isset($results['isprime'])) :?>
    <p> <?php echo $results['isprime']; ?><p/>
    <?php endif; ?>
</form>
