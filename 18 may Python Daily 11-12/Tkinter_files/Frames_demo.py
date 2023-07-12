from tkinter import *

root = Tk()
root.geometry("600x400")

f1 = Frame(root, bg="red", relief="sunken")
f1.pack(side="left", padx=20, fill="y")

l1 = Label(f1, text="wow", fg="green")
l1.pack(padx=40, anchor=W, side="left")


f2 = Frame(root, bg="yellow", relief="sunken")
f2.pack(side=RIGHT, fill=Y)

l2 = Label(f2, text="gdgfehrjkb dvhgb", fg="grey")
l2.pack(padx=50,  side=RIGHT, fill=Y)
root.mainloop()
