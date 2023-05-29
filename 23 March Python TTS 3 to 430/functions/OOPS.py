class student:
    def __init__(self):
        self.name=""
        self.age=0
        self.mobile=""
        
    def getvalue(self):
        self.name=input("Enter name: ")
        self.age=int(input("Enter Age: "))
        self.mobile=input("enter mobile: ")
        print(id(self))
    
    def showdata(self):
        print(f"name is {self.name} age is {self.age} and mobile is {self.mobile}")

s1=student()
s2 = student()
print(id(s2))
# s1.getvalue()
s1.showdata()
s2.getvalue()
