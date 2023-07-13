from tkinter import *
import tkinter.messagebox as tmsg
root = Tk()
root.geometry("400x300")

def chek():
    if a==True:
        pass
# a = tmsg.askokcancel(root, "Are You Good")
# a = tmsg.askquestion(root, "Are You Good")
# a=tmsg.askretrycancel(root,"Try agin")
a=tmsg.showerror(root,"HEy DO it")
print(a)
root.mainloop()
