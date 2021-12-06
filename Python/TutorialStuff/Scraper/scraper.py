import requests
import smtplib
import time
from bs4 import BeautifulSoup
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

URL = 'https://www.coolblue.be/nl/product/838298/apple-iphone-11-pro-256-gb-space-gray.html'

header = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:71.0) Gecko/20100101 Firefox/71.0'
}

page = requests.get(URL, headers=header)

parser = BeautifulSoup(page.content, 'html.parser')

articleTitle = parser.find("h1").text.strip('\n')
articlePrice = int(parser.find(
    "strong", {'class': 'sales-price__current'}).text.replace('.', '')[:4])


def notifyMail():
    subject = f'Price of {articleTitle} has dropped'
    message = MIMEMultipart('alternative')
    message['Subject'] = subject
    message['From'] = 'mrkenzo47@gmail.com'
    message['To'] = 'mrkenzo47@gmail.com'

    text = f'Hi! The price of {articleTitle} has dropped to {articlePrice} euros.\nHere is the link to check the product out: {URL}'
    html = f'''\
    <html>
        <head></head>
        <body>
            <p>Hi!<br>
                The price of {articleTitle} has dropped to {articlePrice} euros.<br>
                Here is the <a href="{URL}">link</a> to check the product out.
            </p>
        </body>
    </html>
    '''

    part1 = MIMEText(text, 'plain')
    part2 = MIMEText(html, 'html')

    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.ehlo()
    server.login('mrkenzo47@gmail.com', 'INSERT APP SPECIFIC PASSWORD')
    message.attach(part1)
    message.attach(part2)
    server.sendmail('mrkenzo47@gmail.com', 'mrkenzo47@gmail.com', str(message))  # From, To, Message
    print('Mail sent successfully')
    server.quit()


print('The current price of %s is %s euros' % (articleTitle, articlePrice))

while True:
    if articlePrice < 1300:
        notifyMail()
        print(f'Price has dropped under {articlePrice}. Stopping script...')
        break
    time.sleep(3600)
