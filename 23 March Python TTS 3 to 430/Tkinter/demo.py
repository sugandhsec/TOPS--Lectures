from tkinter import *

root=Tk()
root.geometry("600x400")
name=StringVar()
email=StringVar()
age=IntVar()

def showdata():
    file=open("data.txt","a")
    file.write(f"name: {name.get()}\nage:{age.get()}\nemail:{email.get()}")

l1=Label(root,text="Full NAme",pady=10,padx=20)
# l1.pack()
l1.grid(row=1,column=1)

t1 = Entry(root, textvariable=name)
# t1.pack()
t1.grid(row=1,column=2)

l2 = Label(root, text="Age", pady=10, padx=20)
# l1.pack()
l2.grid(row=2,column=1)

t2 = Entry(root, textvariable=age)
# t1.pack()
t2.grid(row=2,column=2)
l3 = Label(root, text="Email", pady=10, padx=20)
# l1.pack()
l3.grid(row=3,column=1)

t3 = Entry(root, textvariable=email)
# t1.pack()
t3.grid(row=3,column=2)

b1=Button(root,command=showdata,text="Printdata")
b1.grid(row=4, column=2)
root.mainloop()