import random
print(random.randint(12, 56))
print(random.randrange(23, 60, 5))
print(random.random())
list1 = ["hello", 45, True, 8965, 12.32]
print(random.choice(list1))
print(random.choices(list1, k=2))
