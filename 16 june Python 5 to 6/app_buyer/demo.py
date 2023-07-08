import random
# otp=random.randint(100000,999999)
# print(otp)

list1=["1","2","4","9","t","y","k"]
otp=random.choices(list1,k=8)
otp="".join(otp)
print(otp)