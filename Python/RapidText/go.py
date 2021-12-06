import time
from util.WindowHandler import WindowMgr
from util.KeyHandler import press_key, release_key


char_map = { # Some chars need to be swapped (QWERTY/AZERTY)
    'a': 0x10, 'z': 0x11, 'e': 0x12, 'r': 0x13, 't': 0x14, 'y': 0x15, 'u': 0x16, 'i': 0x17, 'o': 0x18, 'p':0x19,
    'q': 0x1E, 's': 0x1F, 'd': 0x20, 'f': 0x21, 'g': 0x22, 'h': 0x23, 'j': 0x24, 'k': 0x25, 'l': 0x26,
    'w': 0x2C, 'x': 0x2D, 'c': 0x2E, 'v': 0x2F, 'b': 0x30, 'n': 0x31, ',': 0x32, 'm': 0x33, 'caps': 0x3A, 'enter': 0x1C,
    ' ': 0x39, 'minus': 0x0C, 'tab': 0x0F
}


def get_game_window():
   w.find_window_wildcard("Counter-Strike*")  # Gets the CounterStrike window
   w.set_foreground()  # Sets the CounterStrike Window in the foreground
   #print(w.get_hwnd()) # Debug print the HWND (Handle to a Window)


def send(char):
    press_key(char_map[char])
    release_key(char_map[char])


def start(message, loopAmount, ingame, delay):
    if(ingame == 1):
        for _ in range(loopAmount):
            time.sleep(delay)
            press_key(0x15)          # Opens ALL chat window.
            time.sleep(0.1)
            release_key(0x15)
            time.sleep(0.1)
            for char in message:    # Type characters one by one.
             if char.isupper():
                 send('caps')
                 send(char.lower())
                 send('caps')
             else:
                 send(char)
            time.sleep(0.1)
            send('enter')           # Opens ALL chat window.
    else:
        for _ in range(loopAmount):
            time.sleep(delay)
            for char in message:    # Type characters one by one.
             if char.isupper():
                 send('caps')
                 send(char.lower())
                 send('caps')
             else:
                 send(char)
            send('enter')           # Opens ALL chat window.


# ingame = 1
# delay = 1
# message = "hello"
# loopAmount = 5


ingame = input("Enter 1 for ingame, 2 for lobby: ")
delay = float(input("Enter delay in seconds (ex: 0.05)"))
message = input("Word/Phrase: ")
loopAmount = int(input("Amount of times to execute: "))


w = WindowMgr()
get_game_window()
time.sleep(3) # Wait for 3 seconds because CSGO 
start(message, loopAmount, ingame, delay)
