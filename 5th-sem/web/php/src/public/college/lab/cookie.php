<?php
$cookie_name = "name";
$cookie_value = "vimmer";

setcookie($cookie_name,$cookie_value, time()+3600, "/");

if(!isset($_COOKIE[$cookie_name])) {
    echo "Cookie is not set!";
}else {
    echo "Cookie name :".$cookie_name."<br/>";
    echo "Cookie value :".$_COOKIE[$cookie_name]."<br/>";
}

echo "<br/>Cookie Deletion";
setcookie("user","",time()-3600);
echo "Cookie 'user' is deleted.";
?>
