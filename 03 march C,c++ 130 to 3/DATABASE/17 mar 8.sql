-- DQL(DATA QUERY LANGUAGE)
use classicmodels;
select * from classicmodels.customers;
select * from customers;
SELECT customerName,phone from customers;
-- where 
select * from customers where country="USA" order by customerName;
select * from customers where country="USA" order by customerName desc;
select * from customers  order by city desc ,customerName;

select * from customers order by city;

select * from customers where country="USA" ;

-- LIKE 
% --0 more than 0
_ --1 exact one
like k%
like _m%
select customerName from customers where customerName like "k%";
select customerName from customers where customerName like "%od%";

-- alias pet name

select customerName as cname from customers where customerName like "%od%";

-- limit [startingpoint,]numbeofrecords

select * from customers limit 10;

select * from customers limit 11,10;

-- aggregate functions
min max avg sum count

select min(amount) from payments;
select max(amount) from payments;
select avg(amount) from payments;
select sum(amount) from payments;
select count(customerNumber) from customers where country="USA";

select distinct(country) from customers;

GROUP BY
select country,count(customerNumber) from customers group by country;

select country,count(customerNumber) from customers group by country  
having count(customerNumber)>3;

-- JOINS


select table1.field1 , table1.field2 , table2.field1 , table2.field2
from table1 join table2 on table1.commonfiled=table2.commonfield ;

select payments.*,customers.* from payments join customers on payments.customerNumber
=customers.customerNumber;

select payments.amount,customers.customerName from payments join customers 
on payments.customerNumber=customers.customerNumber;

inner join
left join
right join
cross join

-- TCL(TRANSACTION CONTROL LANGUAGE)
-- it will work on insert update and delete


use university;
start transaction;
savepoint a;
insert into student(rollno,name,branch) values(6,"Satish","Pharma");
insert into student(rollno,name,branch) values(7,"Satish","Pharma");
insert into student(rollno,name,branch) values(8,"Satish","Pharma");
savepoint b;
insert into student(rollno,name,branch) values(9,"Satish","Pharma");
insert into student(rollno,name,branch) values(10,"Satish","Pharma");

rollback;
rollback to b;

commit;

-- DBA(DATABASE ADMINISTRATOR)



start transaction;
savepoint a;
insert into student(rollno,name,branch) values(22,"Satish","Pharma");
insert into student(rollno,name,branch) values(23,"Satish","Pharma");
insert into student(rollno,name,branch) values(24,"Satish","Pharma");
savepoint b;
insert into student(rollno,name,branch) values(25,"Satish","Pharma");
insert into student(rollno,name,branch) values(26,"Satish","Pharma");

rollback to a;

commit;


-- views

use classicmodels;

trriger run on 6 conditions

insert update delete
	before	after
    
name age mobile dob
name---
mobile
dob--15-11-2002
age-cuurent time-dob


CREATE TRIGGER `for_backup_student` AFTER INSERT ON `student` 
FOR EACH ROW insert into student_backup(rollno,name,branch) 
values(new.rollno,new.name,new.branch)


call new_procedure1("NYC")









