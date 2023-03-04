<?php
class Person {
    public $first_name;
    public $last_name;
    public $age;

    public function __construct($first_name, $last_name, $age) {
        $this->first_name = $first_name;
        $this->last_name = $last_name;
        $this->age = $age;
    }

    public function display() {
        echo "Name: " . $this->first_name . " " . $this->last_name . "<br>";
        echo "Age: " . $this->age . "<br>";
    }
}

$basanta = new Person("Basanta", "Rai", 20);
$basanta->display();

$robin = new Person("Robin", "Devkota", 22);
$robin->display();
