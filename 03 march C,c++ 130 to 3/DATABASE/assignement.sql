 create table employee1(
  employee_id varchar(50),
  frist_name varchar(50),
  last_name varchar(50),
  salary varchar(50),
  joining_date varchar(50),
  department varchar(50),
  primary key(employee_id)
  );
  
   create table employee1_backup(
  employee_id varchar(50),
  frist_name varchar(50),
  last_name varchar(50),
  salary varchar(50),
  joining_date varchar(50),
  department varchar(50)
  );
 create table incentive(
     employee_ref_id varchar(50),
      incentive_data varchar(50),
      incentive_amount varchar(50),
      foreign key(employee_ref_id) references employee1(employee_id)
      );



 insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("1","john","araham","1000000","01-jan-1312.00.00am","banking");
      insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("20","Surat","gujarat","584212","01-jan-13 12.00.00am","banking");
      insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("3","roy","thomas","700000","01-feb-1312.00.00am","banking");
     insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("4","tom","jose","600000","01-feb-1312.00.00am","inssurance");
     insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("5","jerry","pinto","650000","01-feb-1312.00.00am","services");
     insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("6","philip","mathew","750000","01-jan-1312.00.00am","services");
      insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("7","testname","123","650000","01-jan-1312.00.00am","services");
     insert into employee1(employee_id,frist_name ,last_name,salary,joining_date,department)
     value("8","testname2","lname%","600000","01-feb-1312.00.00am","inssurance");
     
     
     
insert into incentive(employee_ref_id,incentive_data,incentive_amount )
     value("1","01-feb-13","5000");
     insert into incentive(employee_ref_id,incentive_data,incentive_amount )
     value("2","01-feb-13","3000");
     insert into incentive(employee_ref_id,incentive_data,incentive_amount )
     value("3","01-feb-13","4000");
     insert into incentive(employee_ref_id,incentive_data,incentive_amount )
     value("1","01-jan-13","4500");
     insert into incentive(employee_ref_id,incentive_data,incentive_amount )
     value("2","01-jan-13","3500");
     
     select frist_name from employee1 where frist_name="tom";
     
     select frist_name,joining_date,salary from employee1;
     
     select * from employee1 order by frist_name ,salary desc;
     
     select * from employee1 where frist_name like "%j%";
     
     select * from employee1 group by department order by salary;
     
     select frist_name,incentive_amount from employee1 inner join incentive 
     on employee1.employee_id=incentive.employee_ref_id;
     
     
	