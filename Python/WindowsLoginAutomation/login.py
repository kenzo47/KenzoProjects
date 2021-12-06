'''
Python Login Script for Windows 10.

Features: Autostart Applications
          Move Application Windows to Correct Screen
          ...
'''
import subprocess
import os
import keyboard
import pygetwindow as gw
import time
import winreg

# Firefox, Discord, Spotify, RDP

# C:\Program Files\Mozilla Firefox\firefox.exe
# C:\Users\Kenzo\AppData\Local\Discord\Update.exe --processStart Discord.exe
# C:\Users\Kenzo\AppData\Roaming\Spotify\Spotify.exe
# %windir%\system32\mstsc.exe

spotifyPath = os.environ['APPDATA'] + r"\Spotify\Spotify.exe"
firefoxPath = os.environ['ProgramW6432'] + r"\Mozilla Firefox\firefox.exe" # 64-bit environment variable
discordPath = os.environ['LOCALAPPDATA'] + r"\Discord\Update.exe" + " --processStart Discord.exe" 
rdpPath = os.environ['WINDIR'] + r"\System32\mstsc.exe"
# debugPath = rdpPath = os.environ['WINDIR'] + r"\System32\notepad.exe"

# print(spotifyPath)
# print(firefoxPath)
# print(discordPath)
# print(rdpPath)
# print(debugPath)

def resetWindowSizeAndLocation():
    '''
    TODO: Autofind correct profile (firefox)
    '''
    firefoxWindowLocationFile = os.environ['APPDATA'] + r"\Mozilla\Firefox\Profiles\jxra2nrg.default-release\xulstore.json"  
    try:
        os.remove(firefoxWindowLocationFile) # Delete xulstore.json file to reset position
        subKeyCLSID = r"Software\Spotify"
        spotifyKey = winreg.CreateKey(winreg.HKEY_CURRENT_USER, subKeyCLSID)
        winreg.DeleteKey(spotifyKey, "Window Position") # Delete entire Window Position key (and subkeys from registry) to reset position
        winreg.CloseKey(spotifyKey)
    except:
        print("An error has occured")


def setupWindow(applicationPath, windowTitle, movementDirection, timeToWait):
    subprocess.Popen(applicationPath)
    time.sleep(timeToWait)
    window = gw.getWindowsWithTitle(windowTitle)[0]
    window.activate()
    if movementDirection != "center":
        time.sleep(0.5)
        keyboard.send('left windows + left shift + ' + movementDirection, True, True) # Press True, Release True
        time.sleep(1)
        window.activate()
        keyboard.send('left windows + left shift + ' + movementDirection, True, True)
        time.sleep(0.5)
    window.maximize()

resetWindowSizeAndLocation()
setupWindow(spotifyPath, "Spotify", "left", 1)
time.sleep(1)
setupWindow(discordPath, "Discord", "right", 5)
time.sleep(1)
setupWindow(firefoxPath, "Firefox", "center", 1)
time.sleep(0.5)
subprocess.Popen(rdpPath)
time.sleep(0.2)
keyboard.send('enter', True, True)