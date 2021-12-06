from tkinter import *

root = Tk()
root.title("Checkboxes")
root.geometry("400x400")

#var = IntVar() #0 or 1 if no onvalue or offvalue is specified
var = StringVar()

def check():
    Label(root, text=var.get()).pack()

checkbutton1 = Checkbutton(root, text="Checkbox 1", variable=var, onvalue="On", offvalue="Off", command=check)
checkbutton1.deselect() # Fixes bug that autochecks the box
checkbutton1.pack()

root.mainloop()