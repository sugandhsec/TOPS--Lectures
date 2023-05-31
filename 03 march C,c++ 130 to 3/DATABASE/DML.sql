-- insert into tablename(field1,filed2......) values(value1,value2,value3.....)
insert into student(name,age,mobile,email,address)
 values("Sachin",48,"987455","sachin@gmail.com","mumbai");
 
 -- update
 
 -- Update tablename set filename=value where condition
 
 update student set name="Rahul" where rollno=3;
 update student set name="Vaibhav" ;
 
 -- delete
 
-- DQl(DATA QUERY LANGUAGE)

use university;

show tables;

-- select * from tablename
select * from exam;



use classicmodels;
show tables;


select * from orders;

select * from customers;

select orderNumber,status  from orders;

select * from customers where country="USA";

select * from customers where country="USA" order by customerName;
select * from customers where country="USA" order by city;
select * from customers where country="USA" order by city desc;

select * from customers limit 10;
select * from customers limit 11,10; 
-- where_to_Start,how many
select * from customers limit 30,10;

-- delete from student;
-- aggregate function

-- min max avg sum count
select min(amount) from payments;
select max(amount) from payments;
select sum(amount) from payments;
select count(amount) from payments;
select avg(amount) from payments;

select customerNumber,sum(amount) from payments group by customerNumber;

-- joins
select customers.*,payments.* from customers inner join payments
on payments.customerNumber=customers.customerNumber;



