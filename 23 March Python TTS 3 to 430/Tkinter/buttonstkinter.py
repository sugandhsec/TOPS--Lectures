from tkinter import *
root = Tk()
root.geometry("500x500")

data = StringVar()
age = IntVar()


def demo():
    print(l1.insert("end", data.get()))


b1 = Button(root, text="Click Me", command=demo)
b1.pack()

e1 = Entry(root, textvariable=data)
e1.pack()

l1 = Listbox(root,width=100)
l1.pack()

root.mainloop()
# IntVar
# BooleanVar
# StringVar
# DoubleVar
"""

"""
