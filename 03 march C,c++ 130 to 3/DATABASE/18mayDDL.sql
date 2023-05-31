use college;

-- Creating table-- 

create table student(
sid int auto_increment,
sname varchar(20),
age int,
email varchar(20),
courseid int,
primary key(sid),
foreign key(courseid) references course(cid)
);

drop table course;

create table course(
cid int auto_increment,
cname varchar(20),
fees int,
primary key(cid)
);

-- deleteing table
drop table student;

-- modifying table

-- alter

-- adding new column
alter table student add column gender varchar(10);
alter table student add column city varchar(10) after email;
alter table student add column state varchar(10) first;

-- changing name or datatype
alter table student change column gender studentgender int;

-- deleting column
alter table student drop column studentgender;
alter table student drop column state;
alter table student drop column city; 

14:28:35	
drop table course	
Error Code: 1451. 
Cannot delete or update a parent row: 
a foreign key constraint fails	0.015 sec
