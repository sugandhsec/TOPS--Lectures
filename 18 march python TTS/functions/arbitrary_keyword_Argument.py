def demo(a,b,**c):
    print(a,b,c)

# arbitrary keyword argument **
# stores all values in dictionary format
demo(a=1,b=45,c=29,d=48,e=96,f=12)
# 1 45 {'c': 29, 'd': 48, 'e': 96, 'f': 12}
# 