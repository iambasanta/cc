# SET-A

## 1

### create database named  `library`

    create database library;

### use newly created database

    use library;

### A

#### create table `book`

    create table book(Book_id INT NOT NULL PRIMARY KEY, Bname TEXT, Wname TEXT,
    Pyear DATETIME,Pname TEXT);

### B

#### insert records into `book` table

    insert into book values(
        1, "Clean Code", "Robert C. Martin","2022-09-03","James O. Coplien"
    );

#### insert bulk of recores into database

    insert into book values  
    (2,"Eloquent Javascript","Marjin Haverbeke","2018-04-02","Abu Sayed"),
    (3,"UI Components","ui Adrian","2021-05-23","T.J"), 
    (4,"Rust for Rustaceans","Jon Gjenget","2022-03-12","Ashmita"), 
    (5,"Grooking Algorithms","Aditya Y. Bhargava","2019-07-18","Manning");

### C

#### display `book name`, `writer name`, `publication name`

    select Bname,Wname,Pname from book;

## 2

    create view book_view as select Book_id,Bname from book;

## 3

    delete from book where Pname="Ashmita";

# SET-B

## 1

### create database named  `students`

    create database students;

### use newly created database

    use students;

### A

#### create table `student`

    create table student(StudentNo INT NOT NULL PRIMARY KEY, StudentName VARCHAR(30),
    DBMS INT, ECommerce INT, FIT INT, WebProgramming INT);

### B

#### insert recores into `student` table

    insert into student values(1,"Ram",44,52,39,24);
    insert into student values (2,"Robin",43,55,42,40);
    insert into student values (3,"Sunil",40,43,42,51);
    insert into student values (4,"Basanta",41,43,48,50);

### C

#### calculate Total from `Marks` field

    select StudentNo,Studentname,(DBMS+ECommerce+FIT+WebProgramming) as Total
    from student;

## 2

    alter table student add column PhoneNo varchar(13);

## 3

    update student set StudentName="Shyam" where StudentName="Ram";
