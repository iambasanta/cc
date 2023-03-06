<?php
function checkPrime($num){
    $count = 0;

    for($i = 2; $i <= sqrt($num); $i++){
        if($num % $i == 0){
            $count ++;
        }
    }
    if ($count == 0) {
        echo $num." is a prime number.\n";
    }else {
        echo $num." is not a prime number.\n";
    }
}

checkPrime(9);
checkPrime(3);
?>
