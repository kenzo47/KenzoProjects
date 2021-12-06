from tkinter import Tk, Entry, Label
import json, base64, requests

"""
App ID
    EmZIH87c
Client ID (Consumer Key)
    dj0yJmk9OUFabklNVGlsZ1JWJmQ9WVdrOVJXMWFTVWc0TjJNbWNHbzlNQS0tJnM9Y29uc3VtZXJzZWNyZXQmc3Y9MCZ4PWU4
Client Secret (Consumer Secret)
    0a69a853c36acb2baa4aec4ddafff1e62f1219a8
    """

root = Tk()
root.title("Weather App")
root.geometry("400x300")

client_id = "dj0yJmk9OUFabklNVGlsZ1JWJmQ9WVdrOVJXMWFTVWc0TjJNbWNHbzlNQS0tJnM9Y29uc3VtZXJzZWNyZXQmc3Y9MCZ4PWU4"
client_secret = "0a69a853c36acb2baa4aec4ddafff1e62f1219a8"

def get_token(client_id, client_secret, scope, token_url):
    data = {"grant_type": "password",
            "username": username,
            "password": password,
            "scope": "openid"}
    
    headers = {}

    response = requests.post(token_url,headers=headers, data=data, verify=True, allow_redirects=False)
    return json.loads(response.text)

testLabel = Label(root, get_token(client_id, client_secret, "yahoo", "https://weather-ydn-yql.media.yahoo.com/forecastrss"))
testLabel.pack()
root.mainloop()