import time
from util.WindowHandler import WindowMgr
from util.ImageSearch import click_image, imagesearch, doubleimagesearch
from util.KeyHandler import press_key, release_key
import pyautogui

desertDebuffDay = r"resources\icons\desertdebuffday.png"
desertDebuffNight = r"resources\icons\desertdebuffnight.png"
purifiedWater = r"resources\icons\purifiedwaterinventory.png"
starAniseTea = r"resources\icons\staraniseteainventory.png"
a = r"resources\icons\a.png"

# Character map WIP
char_map = {
    'a': 0x10, 'w': 0x11, 'e': 0x12, 'r': 0x13, 't': 0x14, 'z': 0x15, 'u': 0x16, 'i': 0x17, 'o': 0x18, 'p':0x19,
    'q': 0x1E, 's': 0x1F, 'd': 0x20, 'f': 0x21, 'g': 0x22, 'h': 0x23, 'j': 0x24, 'k': 0x25, 'l': 0x26,
    'y': 0x2C, 'x': 0x2D, 'c': 0x2E, 'v': 0x2F, 'b': 0x30, 'n': 0x31, 'm': 0x32, 'main8': 0x09, 'main9': 0x0A, 'leftctrl': 0x1D
}

hotbarPurifiedWaterPosition = imagesearch(purifiedWater, 0.5)
print("Hotbar Purified Water Position: " + str(hotbarPurifiedWaterPosition))
hotbarStarAniseTeaPosition = imagesearch(starAniseTea, 0.5)
print("Hotbar Star Anise Tea Position: " + str(hotbarStarAniseTeaPosition))

w = WindowMgr()

def send(char):
    press_key(char_map[char])
    time.sleep(0.2)
    release_key(char_map[char])

def get_game_window():
   w.find_window_wildcard("GamezBD - *")  # Gets the GamezBD window and the random ID.
   w.set_foreground()  # Sets the BDO Window in the foreground
   #print(w.get_hwnd()) # Debug print the HWND (Handle to a Window)

def useItem():
    while True:
        position = doubleimagesearch(desertDebuffDay, desertDebuffNight)
        print(position)  # debug
        if position[1] == 'day':
            #pyautogui.press('i')  # Press CTRL to enter Interface mode
            click_image(purifiedWater, hotbarPurifiedWaterPosition, 1)  # Click purified water in hotbar
            break
        elif position[1] == 'night':
            send('main9')
            # keyboard.press(Key.ctrl)  # Press CTRL to enter Interface mode
            # click_image(starAniseTea, hotbarStarAniseTeaPosition, .5)  # Click star anise tea in hotbar
            break
        else:
            continue

get_game_window()
time.sleep(1)
useItem()
