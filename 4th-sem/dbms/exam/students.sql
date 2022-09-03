-- phpMyAdmin SQL Dump
-- version 5.1.1deb5ubuntu1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Sep 03, 2022 at 08:39 AM
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
-- Database: `students`
--

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `StudentNo` int NOT NULL,
  `StudentName` varchar(30) DEFAULT NULL,
  `DBMS` int DEFAULT NULL,
  `ECommerce` int DEFAULT NULL,
  `FIT` int DEFAULT NULL,
  `WebProgramming` int DEFAULT NULL,
  `PhoneNo` varchar(13) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`StudentNo`, `StudentName`, `DBMS`, `ECommerce`, `FIT`, `WebProgramming`, `PhoneNo`) VALUES
(1, 'Ram', 44, 52, 39, 24, NULL),
(2, 'Robin', 43, 55, 42, 40, NULL),
(3, 'Sunil', 40, 43, 42, 51, NULL),
(4, 'Basanta', 41, 43, 48, 50, NULL);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`StudentNo`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
