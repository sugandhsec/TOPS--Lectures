import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    database="university"
)
data="sfdgjklithklehbn"
mycursor = mydb.cursor()
query="""use university"""
mycursor.execute(query)
query=f"""insert into faculty values ({data},"r@gmail.com",48)"""
mycursor.execute(query)