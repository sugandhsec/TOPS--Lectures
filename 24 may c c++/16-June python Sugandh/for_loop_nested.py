for i in range(5,0,-1):
    str1=i*"* "
    print(str1.ljust(10))
# str1="hfkjhs"
# print(str1.rjust(30))
# print(str1.rjust(30,"*"))
for i in range(1,6):
    str1=i*"  "+"* * * *"
    print(str1.ljust(10))
    
    
    
for i in range(1,11):
    if i<6:
        str1=i*"* "
        print(str1.center(10))
    else:
        str1=(10-i)*"* "
        print(str1.center(10))
