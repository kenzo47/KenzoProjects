from tkinter import *

root = Tk()
root.title("Multiple Windows")

def open():
    #Sometimes stuff gets collected by Python garbage collector, try making the variable global to fix that.
    top = Toplevel()
    Label(top, text="Top").pack()
    Button(top, text="Close", command=top.destroy).pack()

Button(root, text="Open Second Window", command=open).pack()

root.mainloop()  