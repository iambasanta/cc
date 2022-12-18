<?php

class Database{
    public $connection;

    public function __construct($config, $username = "root", $password = "root"){
        $dsn = 'mysql:'.http_build_query($config,'',';');

        $this->connection = new PDO($dsn, $username, $password, [
            PDO::ATTR_DEFAULT_FETCH_MODE => PDO::FETCH_ASSOC
        ]);
    }

    public function query($query){

        $statement = $this->connection->prepare($query);
        $statement->execute();

        return $statement;
    }
}

