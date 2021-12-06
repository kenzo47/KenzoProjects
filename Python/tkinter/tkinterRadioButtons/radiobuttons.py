from tkinter import *
from PIL import ImageTk, Image

root = Tk()
root.title("Frame")
#root.iconbitmap("")

#frame = LabelFrame(root, text="Test Frame...", padx=50, pady=50)
frame = LabelFrame(root, padx=20, pady=20)
frame.pack(padx=10, pady=10)

#r = IntVar()
#r.set("1")

MODES = [
    ("Pepperoni", "Pepperoni"),
    ("Cheese", "Cheese"),
    ("Mushroom", "Mushroom"),
    ("Onion", "Onion"),
]

pizza = StringVar()
pizza.set("Pepperoni")

for text, mode in MODES:
    Radiobutton(frame, text=text, variable=pizza, value=mode).pack(anchor=W)

def checked(value):
    label = Label(frame, text=value)
    label.pack()

#Radiobutton(frame, text="Option 1", variable=r, value=1, command=lambda: checked(r.get())).pack()
#Radiobutton(frame, text="Option 2", variable=r, value=2, command=lambda: checked(r.get())).pack()

#label = Label(frame, text=pizza.get())
#label.pack()

button = Button(frame, text="Click", command=lambda: checked(pizza.get()))
button.pack()

root.mainloop() 