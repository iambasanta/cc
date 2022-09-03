-- phpMyAdmin SQL Dump
-- version 5.1.1deb5ubuntu1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Sep 03, 2022 at 08:09 AM
-- Server version: 8.0.30-0ubuntu0.22.04.1
-- PHP Version: 8.1.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `library`
--

-- --------------------------------------------------------

--
-- Table structure for table `book`
--

CREATE TABLE `book` (
  `Book_id` int NOT NULL,
  `Bname` text,
  `Wname` text,
  `Pyear` datetime DEFAULT NULL,
  `Pname` text
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `book`
--

INSERT INTO `book` (`Book_id`, `Bname`, `Wname`, `Pyear`, `Pname`) VALUES
(1, 'Clean Code', 'Uncle Bob', '2022-09-03 00:00:00', 'James O. Coplien'),
(2, 'Eloquent Javascript', 'Marjin Haverbeke', '2018-04-02 00:00:00', 'Abu Sayed'),
(3, 'UI Components', 'ui Adrian', '2021-05-23 00:00:00', 'T.J'),
(4, 'Rust for Rustaceans', 'Jon Gjenget', '2022-03-12 00:00:00', 'Ashmita'),
(5, 'Grooking Algorithms', 'Aditya Y. Bhargava', '2019-07-18 00:00:00', 'Manning');

-- --------------------------------------------------------

--
-- Stand-in structure for view `book_view`
-- (See below for the actual view)
--
CREATE TABLE `book_view` (
`Book_id` int
,`Bname` text
);

-- --------------------------------------------------------

--
-- Structure for view `book_view`
--
DROP TABLE IF EXISTS `book_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `book_view`  AS SELECT `book`.`Book_id` AS `Book_id`, `book`.`Bname` AS `Bname` FROM `book` ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `book`
--
ALTER TABLE `book`
  ADD PRIMARY KEY (`Book_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
