# list1=[45,21,23,12,45,65,23,69,85,41,2,45]
# list1=set(list1)
# list1=list(list1)
# print(list1)

def remove_duplicate(list1):
    list1=set(list1)
    list1=list(list1)
    return list1

lits=[45,21,23,12,45,65,23,69,85,41,2,45]
rmlist=remove_duplicate(lits)
print(rmlist)

# type of arguments
# positional argument
# keyword argument
# deafult argument
# arbitrary position argument
# arbitrary keyword argument