from tkinter import *

root = Tk()


def wrt():
    print("this is write menu Option")


def add():
    print("this is Add menu Option")


menu1 = Menu(root)
menu1.add_command(label="Write", command=wrt)
menu1.add_command(label="Add", command=add)
# menu1.pack()
root.config(menu=menu1)
root.mainloop()
