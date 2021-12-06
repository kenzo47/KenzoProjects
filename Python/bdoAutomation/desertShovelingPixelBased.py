import win32ui as interface

windowName = "GamezBD - 337953" # TODO: Automatically retrieve windowName
window = interface.FindWindow(None, windowName)
deviceContext = window.GetWindowDC()
colorRef = deviceContext.GetPixel(300, 300)
print(colorRef)
deviceContext.DeleteDC()  # Garbage collection


def rgba(colorref):  # COLORREF is a 32-bit value (windef.h)
    mask = 0xff
    return [(colorRef & (mask << (i * 8))) >> (i * 8) for i in range(4)]


print(rgba(colorRef))
