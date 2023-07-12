from tkinter import *
root = Tk()
root.geometry("500x300")
gen = StringVar()

def print_gen():
    lstbox.insert(END,f"{gen.get()}")
    print(gen.get())

l1 = Label(root, text="Gender")
l1.grid(row=1, column=1)

r1 = Radiobutton(root, text="Male", value="Male", variable=gen)
r1.grid(row=1, column=2)
r2 = Radiobutton(root, text="Female", value="female", variable=gen)
r2.grid(row=1, column=3)
r3 = Radiobutton(root, text="Other", value="other", variable=gen)
r3.grid(row=1, column=4)

b1 = Button(root, text="GET GENDER", command=print_gen)
b1.grid(row=2, column=2)

lstbox=Listbox(root)
lstbox.grid(row=3,column=1)



root.mainloop()
