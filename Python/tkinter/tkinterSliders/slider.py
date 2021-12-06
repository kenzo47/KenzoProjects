from tkinter import *

root = Tk()
root.title("Sliders")

def slide():
    Label(root, text=horizontal.get()).pack()
    root.geometry(str(horizontal.get()) + "x" + str(vertical.get()))

vertical = Scale(root, from_=0, to=400)
vertical.pack()

horizontal = Scale(root, from_=0, to=400, orient=HORIZONTAL)
horizontal.pack()

Button(root, text="Resize", command=slide).pack()

root.mainloop()