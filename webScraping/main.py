import requests
import urllib.request
import  time
from bs4 import BeautifulSoup

url = 'https://prothomalo.com'

response = requests.get(url)







soup = BeautifulSoup(response.text, 'html.parser')



a = soup.findAll('img')




r =open('hello.txt','w')

for i in  a:
    try:
        #print(i['alt'])
        r.write(i['alt'] + "\n")
    except:
        print("error")


print("____________________________________")







"""
dailyStar = 'https://www.thedailystar.net/'

response = requests.get(dailyStar)


dailySoup = BeautifulSoup(response.text,'html.parser')

link = dailySoup.find('a')


for i in  link:
    try:

        print(i.get_text())

    except:
        print("error")

"""




