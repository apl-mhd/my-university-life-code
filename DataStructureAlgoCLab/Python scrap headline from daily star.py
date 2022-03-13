import  requests

from urllib.request import urlopen

webAdd = 'http://www.thedailystar.net/'

dailyStar = requests.get(webAdd)
from bs4 import  BeautifulSoup

parsedHtml = BeautifulSoup(dailyStar.text, 'lxml')

headLine = parsedHtml.find_all('a')

#findAll('table', {'class':'theclass'} ):


link = parsedHtml.find_all('a')

print(len(link))

for i in range(len(link)):
    if link[i].parent.name == 'h3':
        print("http://www.thedailystar.net/" + link[i].get("href") +'\n')
        print(link[i].text + '\n')