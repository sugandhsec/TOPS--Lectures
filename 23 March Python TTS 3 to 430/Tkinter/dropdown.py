from tkinter import *
import tkinter.messagebox as tmsg

root = Tk()
root.geometry("500x400")

data = StringVar()
demo = StringVar()
sliding = StringVar()
demo.set("F")


def fun1():
    l1.insert("end", data.get())
    l1.insert("end", demo.get())
    l1.insert("end", sliding.get())


l1 = ["Surat",
      "Ahemdabad",
      "baroda"]

d1 = OptionMenu(root, data, *l1)
d1.pack()

f1 = Frame(root)
f1.pack()
b1 = Button(f1, text="Cliuck ME", command=fun1)
b1.pack()

s1 = Scrollbar(f1)
l1 = Listbox(f1, width=20, yscrollcommand=s1.set)
s1.pack(side="right", fill="y")

l1.pack()
s1.config(command=l1.yview)

r1 = Radiobutton(f1, text="Male", value="M", variable=demo)
r1.pack()
r2 = Radiobutton(f1, text="Female", value="F", variable=demo)
r2.pack()

sl1 = Scale(f1, from_=100, to=500, variable=sliding, orient=HORIZONTAL)


sl1.pack()

m1 = tmsg.askquestion(root, message="How are you")
m1.pack()
root.mainloop()
