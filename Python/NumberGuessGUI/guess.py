from tkinter import *
import random
import sys
import os

root = Tk()
root.title("Random Number Guesser")

label = Label(root, text="Enter a number between 1 and 100")
label.pack()

e = Entry(root)
e.pack()
e.insert(0, "Enter your guess")

randomNumber = random.randint(1, 101)

def submit():
    guessedNumber = int(e.get())
    if guessedNumber < randomNumber:
        label = Label(root, text="The number you've entered is lower than the random number")
    elif guessedNumber > randomNumber:
        label = Label(root, text="The number you've entered is higher than the random number")
    else:
        restartButton = Button(root, text="Restart Game", command=restart)
        restartButton.pack()
        label = Label(root, text="Congratulations! You win.")
    label.pack()

def restart():
    python = sys.executable
    os.execl(python, python, * sys.argv)

submitButton = Button(root, text="Submit", command=submit)
submitButton.pack()

root.mainloop()