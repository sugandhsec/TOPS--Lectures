from tkinter import *
root=Tk()
root.geometry("500x400")
f1=Frame(root,width=100,height=80,relief=SUNKEN,bg="RED")
f1.pack()
sc=Scrollbar(f1)
sc.pack(fill=Y,side=RIGHT)

# ,yscrollcommand=sc.set,

l1=Listbox(f1,yscrollcommand=sc.set,height=80,width=50)
# l1.insert(END,info)
for i in range(500):
    l1.insert(END,f"{i}\n")
l1.pack(padx=20)

sc.config(command=l1.yview)
root.mainloop()