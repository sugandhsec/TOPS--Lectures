from tkinter import *
from PIL import Image,ImageTk
root=Tk()
root.geometry("600x400")

# when your image is .png

# img = PhotoImage(file="C:/Users/Sugandh/Desktop/Sugandh Lectures/Lectures/18 may Python Daily 11-12/Tkinter_files/spider.png")

#when your image in .jpg

myimage = Image.open(
    "C:/Users/Sugandh/Desktop/Sugandh Lectures/Lectures/18 may Python Daily 11-12/Tkinter_files/panda.jpg")
img = ImageTk.PhotoImage(myimage)

l1=Label(root,image=img)
l1.pack()
root.mainloop()