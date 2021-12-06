from tkinter import *
import requests
import json

root = Tk()
root.title("Weather Quality Check")
root.geometry("600x100")

def zipLookup():
    try:
        api_request = requests.get("http://www.airnowapi.org/aq/forecast/zipCode/?format=application/json&zipCode=" + zipcode.get() +"&date=2020-04-30&distance=5&API_KEY=4E837DCE-C909-47EE-A5B7-1F363E76EDD5")
        api = json.loads(api_request.content)
        city = api[0]['ReportingArea']
        quality = api[0]['AQI']
        category = api[0]['Category']['Name']

        if category == "Good":
            weather_color = "#0C0"
        elif category == "Moderate":
            weather_color = "#FFFF00"
        elif category == "Unhealthy for Sensitive Groups":
            weather_color = "#FF9900"
        elif category == "Unhealthy":
            weather_color = "#FF0000"
        elif category == "Very Unhealthy":
            weather_color = "#990066"
        elif category == "Hazardous":
            weather_color = "#660000"

        root.configure(background=weather_color)
        label = Label(root, text=city + " Air Quality: " + str(quality) + " " + category, font=("Helvetica", 18), bg=weather_color, fg="#000000")
        label.grid(row=1, column=0, columnspan=2)
    except Exception as e:
        api = "Error ..."


zipcode = Entry(root)
zipcode.grid(row=0, column=0, sticky=W+E+N+S)

zipcodeButton = Button(root, text="Lookup Zipcode", command=zipLookup)
zipcodeButton.grid(row=0, column=1, sticky=W+E+N+S)
root.mainloop()