from tkinter import *

root=Tk()
# widthxheight
root.geometry("600x400") #first screen
root.minsize(600,400) #minimum fitting of screen
root.maxsize(600,400) #maximum fitting of screen
root.title("this is my WINDOW") #top title of window
root.iconbitmap('C:/Users/Sugandh/Desktop/Sugandh Lectures/Lectures/18 may Python Daily 11-12/Tkinter_files/my.ico')

# widget
# Label
# fonr("name","size","other")
l1=Label(root,text="Hello i am here",bg="RED",fg="yellow",font=("Gabriola 48 italic"),relief="ridge",borderwidth=10,border=60)
l1.pack(side="top",anchor="ne",fill="x",padx=40,pady=60)
root.mainloop()