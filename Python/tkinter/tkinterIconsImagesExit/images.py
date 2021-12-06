from tkinter import *
import os
from PIL import ImageTk, Image

root = Tk()
root.title("Images, Icons & Exitbuttons")

def relativePathToFullPath(relativePath):
    return os.path.join(os.path.dirname(os.path.realpath(__file__)), relativePath)

root.iconbitmap(relativePathToFullPath('resources/icon.ico'))


image = ImageTk.PhotoImage(Image.open(relativePathToFullPath('resources/image.png')))
label = Label(image=image)
label.pack()

button_quit = Button(root, text="Quit", command=root.quit)
button_quit.pack()

root.mainloop()