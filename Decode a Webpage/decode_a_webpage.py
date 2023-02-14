"""
Decode A Web Page
Exercise 17 (and Solution)

Note: this is a 4-chili exercise, not because it introduces a concept (although it introduces a new library), 
but because this exercise is more like a project. Feel free to skip this and come back when you’re more ready!

Use the BeautifulSoup and requests Python packages to print out a list of all the article titles on the New York Times homepage.
"""

import requests
from bs4 import BeautifulSoup

url = "https://www.washingtonpost.com/"
r = requests.get(url)
r_html = r.text

soup = BeautifulSoup(r_html, features="html.parser")
title = soup.find_all('span')
for element in title:
    print(element.string)