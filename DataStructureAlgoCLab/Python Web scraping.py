#web scraping using beautiful soup
#author : Apel Mahmud
import  requests

from urllib.request import urlopen

webAdd = 'https://www.google.com/search?q=data+scraping+blog&client=ubuntu&espv=2&source=lnms&tbm=isch&sa=X&ved=0ahUKEwj7ztjtleLSAhWJtY8KHdzUAsYQ_AUICCgD&biw=1088&bih=733'

dailyStar = requests.get(webAdd)
from bs4 import  BeautifulSoup

parsedHtml = BeautifulSoup(dailyStar.text, 'lxml')

headLine = parsedHtml.find_all('a')

#findAll('table', {'class':'theclass'} ):


link = parsedHtml.find_all('a', {'class':'fl'})

print(len(link))

for i in range(len(link)):
    if link[i].parent.name == 'td':
        print('www.google.com'+link[i].get("href"))