from tkinter import *
import os
from PIL import ImageTk, Image

root = Tk()
root.title("ImageViewer")

def relativePathToFullPath(relativePath):
    return os.path.join(os.path.dirname(os.path.realpath(__file__)), relativePath)

root.iconbitmap(relativePathToFullPath(r'resources\icon.ico'))

image = ImageTk.PhotoImage(Image.open(relativePathToFullPath(r'resources\image.png')))
image2 = ImageTk.PhotoImage(Image.open(relativePathToFullPath(r'resources\image2.png')))
image3 = ImageTk.PhotoImage(Image.open(relativePathToFullPath(r'resources\image3.png')))
image4 = ImageTk.PhotoImage(Image.open(relativePathToFullPath(r'resources\image4.png')))
image5 = ImageTk.PhotoImage(Image.open(relativePathToFullPath(r'resources\image5.png')))

imageList = [image, image2, image3, image4, image5]

status = Label(root, text="Image 1 of " + str(len(imageList)), bd=1, relief=SUNKEN, anchor=E)

def forward(imagePosition):
    global label
    global button_forward
    global button_back

    label.grid_forget()
    label = Label(image=imageList[imagePosition-1])

    button_forward = Button(root, text=">>", command=lambda: forward(imagePosition+1))
    button_back = Button(root, text="<<", command=lambda: back(imagePosition-1))

    sizeOfImageList = len(imageList)
    if imagePosition == sizeOfImageList:
        button_forward = Button(root, text=">>", state=DISABLED)

    label.grid(row=0, column=0, columnspan=3)
    button_back.grid(row=1, column=0)
    button_forward.grid(row=1, column=2)

    status = Label(root, text="Image " + str(imagePosition) + " of " + str(len(imageList)), bd=1, relief=SUNKEN, anchor=E)
    status.grid(row=2, columnspan=3, sticky=W+E)


def back(imagePosition):
    global label
    global button_forward
    global button_back

    label.grid_forget()
    label = Label(image=imageList[imagePosition-1])
    button_forward = Button(root, text=">>", command=lambda: forward(imagePosition+1))
    button_back = Button(root, text="<<", command=lambda: back(imagePosition-1))

    if imagePosition == 1:
        button_back = Button(root, text="<<", state=DISABLED)

    label.grid(row=0, column=0, columnspan=3)
    button_back.grid(row=1, column=0)
    button_forward.grid(row=1, column=2)

    status = Label(root, text="Image " + str(imagePosition) + " of " + str(len(imageList)), bd=1, relief=SUNKEN, anchor=E)
    status.grid(row=2, columnspan=3, sticky=W+E)

label = Label(image=image)
label.grid(row=0, column=0, columnspan=3)


button_back = Button(root, text="<<", command=back, state=DISABLED)
button_quit = Button(root, text="Quit", command=root.quit)
button_forward = Button(root, text=">>", command=lambda: forward(2))

button_back.grid(row=1, column=0)
button_quit.grid(row=1, column=1)
button_forward.grid(row=1, column=2, pady=10)

status.grid(row=2, columnspan=3, sticky=W+E)

root.mainloop()