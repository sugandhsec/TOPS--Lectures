class A:
    def __init__(self):
        self.__x=85
        self.y=None
        
    def __geta(self):
#         self.x=int(input("Enter number: "))
        self.y=int(input("Enter number: "))
        
    def showa(self):
        print(f"Value of x is {self.__x} and Value of Y is {self.y}")
        
class B(A):
    def __init__(self):
        self.m=None
        self.n=None
        super().__init__() #calling parent class constructor
        
    def getb(self):
        self.m=int(input("Enter number: "))
        self.n=int(input("Enter number: "))
        self.__x=int(input("Enter Number"))
        
    def showb(self):
        print(f"Value of m is {self.m} and Value of N is {self.n}")


b1 = B()
b1._A__geta()
b1.getb()
b1.showa()
b1.showb()
print(b1._A__x)
