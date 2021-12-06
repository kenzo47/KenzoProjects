from tkinter import Tk, Entry, Button, Label

root = Tk()
root.title("Binary Search")
root.geometry("300x200")

numberList = [10,20,30,35,50,60]

def addNumberToList():
    numberList.append(int(inputTextbox.get()))
    numberList.sort()
    print(numberList)
    outputLabel = Label(root, text=numberList)
    outputLabel.pack()

def binarySearch(x, list):
    beginIndex = 0
    endIndex = len(list) - 1

    while beginIndex <= endIndex:
        midpoint = beginIndex + (endIndex - beginIndex) // 2 # / Division returns float in Python 3
        midpointValue = list[midpoint]
        if midpointValue == x:
            return midpoint
        elif x < midpointValue:
            endIndex = midpoint - 1
        else:
            beginIndex = midpoint + 1
    return None

def getPosition(x, list):
    position = binarySearch(x, list)
    if position == None:
        outputLabel = Label(root, text="Number not found in list")
    else:
        outputLabel = Label(root, text=position)
    outputLabel.pack()

inputTextbox = Entry(root)
inputTextbox.insert(0, "Enter some numbers")
inputTextbox.pack()

submitButton = Button(root, text="Submit", command=addNumberToList)
submitButton.pack()

submitButton = Button(root, text="Binary Search", command=lambda: getPosition(int(inputTextbox.get()), numberList))
submitButton.pack()
root.mainloop()