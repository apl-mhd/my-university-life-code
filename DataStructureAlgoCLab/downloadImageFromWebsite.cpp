import urllib
from bs4 import BeautifulSoup
import csv

import requests
url = ['https://www.pexels.com/search/HD%20wallpaper/','https://images.pexels.com/photos/33045/lion-wild-africa-african.jpg?h=350&auto=compress&cs=tinysrgb']

page = requests.get(url[0])

soup = BeautifulSoup(page.content, 'html.parser')

atag = soup.find_all('img');

print len(atag)



for i in range(len(atag)-2):
	imglnk = atag[i+2].get('src')
	print imglnk
	r = requests.get(imglnk, allow_redirects=True)
	open('img'+str(i), 'wb').write(r.content)


##open('imag'+str(i), 'wb').write(r.content)
##https://images.pexels.com/photos/33109/fall-autumn-red-season.jpg?h=350&auto=compress&cs=tinysrgb