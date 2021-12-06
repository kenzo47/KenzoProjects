import os
import time
from util.WindowHandler import WindowMgr
import subprocess
from pynput.keyboard import Key, Controller
from util.ImageSearch import click_image, imagesearch, doubleimagesearch
import pyautogui

desktopPath = os.path.join(os.path.join(os.environ['USERPROFILE']), 'Desktop') 
BDOlauncherPath = os.path.join(desktopPath, 'GamezBDO.exe') 
startButton = r"resources\start.png"

def get_launcher_window(windowHandle):
   window.find_window_wildcard(windowHandle)  # Gets the GamezBD Launcher window
   window.set_foreground()  # Sets the GamezBD Launcher Window in the foreground
   print(window.get_hwnd()) # Debug print the HWND (Handle to a Window)

#os.system(BDOlauncherPath) #Launch BDO Launcher executable
subprocess.Popen(BDOlauncherPath) #Start launcher as subprocess
time.sleep(5) #Wait 5 seconds for launcher to finish loading
window = WindowMgr() #Start a new WindowManager
get_launcher_window("GamezBD*") #Select GamezBD Launcher window
keyboard = Controller() #Start a new pynput keyboard controller
keyboard.type('\t\t\t') #3x tab key to select login button
keyboard.press(Key.enter)
keyboard.press(Key.tab) #1x tab key to select start button
keyboard.press(Key.enter)
time.sleep(30)
get_launcher_window("GamezBD - *") #Select GamezBD GAME window
startButtonPosition = imagesearch(startButton, 0.7)
print("Start Button Position: " + str(startButtonPosition))
click_image(startButton, startButtonPosition, 1)
pyautogui.click()