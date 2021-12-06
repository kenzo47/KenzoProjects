from tkinter import *
from PIL import ImageTk, Image
from tkinter import filedialog

root = Tk()
root.title("File Dialog")

def open():
    global image #Without global the image will get deleted by python garbage collector 
    root.filename = filedialog.askopenfilename(initialdir=r"C:\GamezBD", title="Select a file", filetypes=(("PNG Files", "*.png"),("All Files", "*.*")))
    Label(root, text=root.filename).pack()
    image = ImageTk.PhotoImage(Image.open(root.filename))
    Label(root, image=image).pack()

Button(root, text="Open File", command=open).pack()
root.mainloop()
