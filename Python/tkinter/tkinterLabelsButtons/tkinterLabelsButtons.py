import time
from tkinter import *

root = Tk()

e = Entry(root)
e.pack()
e.insert(0, "Enter you name")

def clickAction():
    label2 = Label(root, text=e.get())
    label2.pack()

label1 = Label(root, text="EZClock")
label2 = Label(root, text="EZClock")
button = Button(root, text="Click", command=clickAction)

label1.pack()
label2.pack()
button.pack()
root.mainloop()

