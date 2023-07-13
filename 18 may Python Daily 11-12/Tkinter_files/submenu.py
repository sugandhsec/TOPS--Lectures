from tkinter import *

root=Tk()
root.geometry("400x400")
mainmenu=Menu(root)

submenu1 = Menu(mainmenu , tearoff=0)
submenu1.add_command(label="New Text file")
submenu1.add_command(label="New file")
submenu1.add_command(label="New Window")
submenu1.add_command(label="Open file")
submenu1.add_command(label="Open Folder")
mainmenu.add_cascade(label="File",menu=submenu1)

submenu2=Menu(mainmenu,tearoff=0)
submenu2.add_command(label="Undo")
submenu2.add_command(label="Redo")
submenu2.add_separator()
submenu2.add_command(label="Cut")
submenu2.add_command(label="Copy")
submenu2.add_command(label="Paste")
submenu2.add_separator()
submenu2.add_command(label="Find")
mainmenu.add_cascade(label="Edit",menu=submenu2)

root.config(menu=mainmenu)

root.mainloop()