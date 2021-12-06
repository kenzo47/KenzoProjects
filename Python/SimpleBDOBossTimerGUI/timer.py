from tkinter import ttk, Label, Entry, Button, DISABLED, NORMAL, Tk
from threading import Thread
from playsound import playsound
import time
import os

root = Tk()
root.title("Simple Timer")
root.geometry("150x144")

options = ["1 Minute", "2 Minutes", "5 Minutes", "10 Minutes", "15 Minutes", "30 Minutes", "1 Hour"]
values = [1,2,5,10,15,30,60]

def relativePathToFullPath(relativePath):
    return os.path.join(os.path.dirname(os.path.realpath(__file__)), relativePath)

def countdown():
    if textBox.get() == "":
        t = int(values[combo.current()]) * 60
    else:
        t = int(textBox.get()) * 60
    startButton.configure(state=DISABLED)
    root.configure(bg="green")
    while t:
        minutes, seconds = divmod(t, 60)
        timeformat = '{:02d}:{:02d}'.format(minutes, seconds)
        # print(timeformat, end="\r")
        countdownLabel = Label(root, text=timeformat)
        countdownLabel.grid(row=5, column=0, pady=(2,0))
        time.sleep(1)
        t -= 1
    countdownLabel = Label(root, text="Done")
    countdownLabel.grid(row=5, column=0, pady=(2,0))
    root.configure(bg="red")
    startButton.configure(state=NORMAL)
    playsound(relativePathToFullPath("resources/alarm.wav"))

def start():
    countdownThread = Thread(target=countdown)
    countdownThread.setDaemon(True)
    countdownThread.start()

combo = ttk.Combobox(root, values=options)
combo.current(0)
combo.grid(row=0, column=0, pady=(5,0), padx=(4,0))

orLabel = Label(root, text="OR")
orLabel.grid(row=1, column=0)

minutesLabel = Label(root, text="Enter time in minutes")
minutesLabel.grid(row=2, column=0, pady=(0,2))

textBox = Entry(root)
textBox.grid(row=3, column=0, pady=(0,5))

startButton = Button(root, text="Start Countdown", command=start)
startButton.grid(row=4, column=0)

root.mainloop()