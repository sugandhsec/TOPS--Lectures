-- CREATE DATABASE

-- CREATE DATABASE DATABASENAME
CREATE DATABASE UNIVERSITY;
 
-- USE DATABASENAME
USE UNIVERSITY;

-- HOW TO DELETE DATABASE
-- DROP DATABASE DATABASENAME
DROP DATABASE DEMO;

/*
CREATE TABLE TABLENAME(
FILED1 DATATYPE,
FILED2 DATATYPE,
FIELD3 DATATYPE

CONSTRAINTS
);
PRIMARY KEY--UNIQUE NUMBER FOR EACH RECORD
FOREIGN KEY---
*/
create table student(
rollno int auto_increment,
name varchar(200) not null,
age int,
mobile	int,
email varchar(20),
address varchar(20),
primary key(rollno) 
);
/*
datatype
intger
varchar(size)
date
datetime

drop table tablename

*/
drop table student;

create table exam(
rollno int,
s_code varchar(6),
marks int,
p_code varchar(6),
foreign key(rollno) references student(rollno) 
);
use university;



