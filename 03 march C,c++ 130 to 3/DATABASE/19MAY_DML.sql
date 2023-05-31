-- Data Manipulation language
-- insert update delete
use college;

show tables;

-- insert into tablename(column1,column2,column3...) values
-- (value1,value2,value3....);

insert into course(cid,cname,fees) values(1,"BCA",58954);
insert into course(cid,fees) values(3,58954);
insert into course(cname,fees) values("BSCIT",48756); -- best way

insert into course values(2,"MCA",47854);

-- update
-- update tablename set columnname=value [where condition];

update course set cname="BCOM"; 
-- if where not mention then whole column value will be changed
update course set cname="BCOM" where cid=5; 

-- deleting 
-- delete from table where condition;
delete from course where cid=3;

-- drop and truncate
-- drop table student;
create table demo(sid int);

drop table demo;
truncate table student;