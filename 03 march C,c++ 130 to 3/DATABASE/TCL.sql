-- Transaction control Language 
-- DML
-- insert update delete
use company;


start transaction;
savepoint a;
insert into department(deptname,location,deptdesc,total_emp)
values("clerk","Baroda","Advertisement",20);
insert into department(deptname,location,deptdesc,total_emp)
values("rgr","Baroda","Advertisement",20);
insert into department(deptname,location,deptdesc,total_emp)
values("ter","Baroda","Advertisement",20);
savepoint b;
insert into department(deptname,location,deptdesc,total_emp)
values("fdg","Baroda","Advertisement",20);
insert into department(deptname,location,deptdesc,total_emp)
values("sfs","Baroda","Advertisement",20);

rollback to a;

commit;


trigger--

after or before
inert update or delete


insert into student_backup values
(new.sid,new.sname,new.age,new.email,new.courseid)

DROP TRIGGER IF EXISTS `trigger_for_student_backup`;
CREATE DEFINER=`root`@`localhost` TRIGGER
 `trigger_for_student_backup` AFTER INSERT ON
 `student` FOR EACH ROW insert into student_backup 
 values(new.sid,new.sname,new.age,new.email,new.courseid)
 
 