from tkinter import *
from PIL import ImageTk, Image

root = Tk()
root.title("Frame")
#root.iconbitmap("")

#frame = LabelFrame(root, text="Test Frame...", padx=50, pady=50)
frame = LabelFrame(root, padx=50, pady=50)
frame.pack(padx=10, pady=10)

button = Button(frame, text="Exit", command=root.quit)
button.grid(row=0, column=0)
button2 = Button(frame, text="Exit #2", command=root.quit)
button2.grid(row=0, column=1,)

root.mainloop()