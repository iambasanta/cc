<?php
$arr = array(1,2,3,4,5);

function searchInArray($list, $needle){
    $count = count($list);

    for($i = 0; $i < $count; $i++){
        if($list[$i] == $needle){
            return true;
        }
    }
}

if(searchInArray($arr, 4)){
    echo "The value is present in array.\n";
}else{
    echo "The value is not present in array.\n";
}

?>
