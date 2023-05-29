# Tkinter is a python GUI module
# Graphical User Interface
# first install tkinter
# pip install tk
from tkinter import *  # import everything from tkinter module
root = Tk()  # create a screen
# "widthxheight"
root.geometry("800x500")  # set screen initial size
root.minsize(200,200) #set minsize for window scree
root.maxsize(600, 500)  # set maxsize for window scree

root.mainloop()  # show screen until se close it
