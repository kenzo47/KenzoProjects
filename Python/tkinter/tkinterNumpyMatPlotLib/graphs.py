from tkinter import *
import matplotlib.pyplot as plt
import numpy as np

root = Tk()
root.title("Graphs")
root.geometry("400x200")

def graph():
    house_prices = np.random.normal(200000, 25000, 5000)
    plt.hist(house_prices, 50)
    plt.show()

displayButton = Button(root, text="Show graph", command=graph)
displayButton.pack()

root.mainloop()