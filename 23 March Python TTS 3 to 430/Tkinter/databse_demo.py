import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    database="demo"
)
rollno=int(input("Enter Rollno: "))
age=int(input("Enter Age: "))
name=input("Enter Name: ")
email=input("Enter Email: ")
mobile=input("Enter mobile: ")
mycursor = mydb.cursor()
query=f"""use demo"""
mycursor.execute(query)
mycursor = mydb.cursor()
query=f"""create table s2(id int)"""
mycursor.execute(query)

mycursor = mydb.cursor()
query=f"""insert into student values({rollno},"{name}","{email}",{age},"{mobile}")"""
mycursor.execute(query)

mydb.commit()