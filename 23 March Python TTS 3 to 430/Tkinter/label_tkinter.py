from tkinter import *

root = Tk()
root.geometry("500x300")
# widget(attribute=Value)
# l1 = Label(text="hello this is my first label", bg="red", fg="white", font=("TimesNewRoman 36 bold"), padx=250, pady=20, relief="groove", borderwidth=5)
l1 = Label(text="hello", bg="grey", fg="blue", padx=50)
l1.pack(anchor="e", side="right", fill="y", padx=40)


root.mainloop()
# Label Widget Attribute
# text-----which text you wnat to enter in Label
# bg===background colour
# fg= font colour
# font=("font name,size,type")
# padx---padding in x direction
# pad y --padding in y direction
# relief ===border type
# borderwidth---width of border

# pack attribute

# anchor----direction
# side =side of direction
# fill=fill the whole part in x or y or both
# padx==padding in x direction
# pad y--padding in y direction
