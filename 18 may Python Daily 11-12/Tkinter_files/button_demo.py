from tkinter import *

root=Tk()
root.geometry("700x500")

def data():
    if chek_data.get()==True:
        file=open("data.txt","a")
        file.write(name.get())
        file.close()

# StringVar,IntVar,DoubleVar,BooleanVar
name=StringVar()
chek_data=BooleanVar()
l1 = Label(root, text="Enter NAme: ").grid(row=1, column=1)

e1=Entry(root,textvariable=name)
# e1.pack()
e1.grid(row=1,column=2)
# e1.place(x=20,y=100)

chk = Checkbutton(root, text="Hey HIT ME", variable=chek_data)
chk.grid(row=2,column=1)


b1 = Button(root, text="HIT ME ", command=data)
# b1.pack()
b1.grid(row=2,column=2)



root.mainloop()

