import random
file=open("Detail2.txt","r")
list1=[]
for i in file:
    list1.append(i)
file.close()
print(random.choice(list1))