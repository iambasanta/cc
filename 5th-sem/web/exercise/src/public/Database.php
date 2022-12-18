<?php

class Database{
    public $connection;

    public function __construct(){
        $dsn = "mysql:host=db;dbname=demo;user=root;password=root;";

        $this->connection = new PDO($dsn);
    }

    public function query($query){

        $statement = $this->connection->prepare($query);
        $statement->execute();

        return $statement;
    }
}

