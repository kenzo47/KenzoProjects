from tkinter import *
from PIL import ImageTk, Image
from tkinter import messagebox

root = Tk()
root.title("Messagebox")

frame = LabelFrame(root, padx=30, pady=30)
frame.pack()

def popup():
    response = messagebox.askyesno("Info", "This is a popup!")
    #Label(frame, text=response).pack()
    if response == 1:
            Label(frame, text="You clicked yes").pack()
    else:
            Label(frame, text="You clicked no").pack()

Button(frame, text="Popup", command=popup).pack()

root.mainloop()