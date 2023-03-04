<?php
function is_prime($num){
    $count = 0;
    for($i = 1; $i<=$num; $i++){
        if($num%$i == 0){
            $count++;
        }
    }

    if($count == 2){
        return $num;
    }else{
        return false;
    }
}

$numOne = is_prime(44);
$numTwo = is_prime(23);

if($numOne && $numTwo){
    $diff = $numTwo - $numOne;

    if($diff == 2){
        echo "Twin prime";
    }else{
        echo "not Twin prime";
    }
}else{
    echo "Any one of the numbers is not prime";
}
