-- DQL(DATA QUERY LANGUAGE)
use classicmodels;
show tables;

select * from customers;
select customerNumber,customerName,phone from customers;

select * from customers where city="Las Vegas";
select phone,country from customers where city="Las Vegas";


-- Logical Operators 

select * from customers where city="Las Vegas" or state="CA";

select * from customers where city="San Diego" and creditLimit>100000;

select * from customers where country != "USA";

-- order by
select * from customers order by contactFirstName;
select * from customers order by contactFirstName desc;
select * from customers order by city desc,customerName;


-- Like
_ one or exact one
% one zero or more than one

where name like '_a__'

name like %pt%

select * from customers where contactLastName like  '_A___';
select * from customers where contactLastName like  '%am%';
select * from customers where contactLastName like  'ke%';

-- Aggregate functions 
-- min max avg sum count
-- alias name
select sum(amount) as total from payments;
select max(amount) as total from payments;
select min(amount) as total from payments;
select avg(amount) as total from payments;
select count(amount) as total from payments;


select count(customerNumber) from customers where city="Las Vegas"
select count(customerNumber) from customers where city="NYC";

--  Gorup By clause
select country,count(customerNumber) from customers group by country;

select customerNumber,sum(amount) from payments group by customerNumber;
select customerNumber,max(amount) from payments group by customerNumber;

-- having
select customerNumber from payments group by customerNumber having sum(amount)>100000;
select customerNumber from payments group by customerNumber having max(amount)>100000;


use college;

create table datastd(
entryday datetime,
self timestamp
);

drop table datastd;
insert into datastd(entryday) values("2012-5-23 12:35:14");

-- Limit
use classicmodels;

select * from tablename limit [starting point],number_of_data

select * from customers limit 10;
select * from customers limit 11,20;
select * from customers limit 100,200;

-- In
select * from customers where customerNumber in (110,111,112,113,114,121,115,148) or country in("Las Vegas","USA")

-- between
select * from customers where customerNumber between 112 and 150;

-- union or union all
create database demo145;
use demo145;

create table faculty(
name varchar(20),
age int,
email varchar(20)
);

insert into faculty(name,age,email) values('Ram',18,'sp@gmail.com');
insert into faculty(name,age,email) values('jinit',20,'jm@gmail.com');

create table student(
name varchar(20),
age int,
email varchar(20)
);

insert into student(name,age,email) values('Ram',25,'sg@gmail.com');
insert into student(name,age,email) values('Shyam',28,'tg@gmail.com');
insert into faculty(name,age,email) values('Shyam',28,'tg@gmail.com');


use demo145;
select * from faculty;
select * from student;

select * from faculty union select * from student;
select * from faculty union all select * from student;





