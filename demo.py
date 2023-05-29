st1 = "hello This is nice language"
l1 = st1.split(" ")
l3 = []
for i in l1:
    l2 = list(i)
    l2[0] = '$'
    str2 = "".join(l2)
    l3.append(str2)  
str2 = " ".join(l3)
print(str2)
