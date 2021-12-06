from tkinter import *

root = Tk()
root.title("Dropdown Menu")
root.geometry("400x400")

def show():
    Label(root, text=var.get()).pack()

options = [
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday"
]

var = StringVar()
var.set(options[0])

drop = OptionMenu(root, var, *options) #Asterisk is just the weird syntax
drop.pack()

Button(root, text="Show selection", command=show).pack()

root.mainloop()