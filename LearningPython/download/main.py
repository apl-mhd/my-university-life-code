#https://indianpythonista.files.wordpress.com/2016/10/11.png
import  requests
from  bs4  import  BeautifulSoup
import html5lib




imageUrl ='https://www.pexels.com/search/HD%20wallpaper/'


r = requests.get(imageUrl)

soup = BeautifulSoup(r.content, 'html5lib')

#print(soup.prettify())

links = soup.findAll('img')

http=''


x  = [i['src'] for i in links if  i['src'].endswith('png')]


print(x[0])





for i in  x:

    fileGet = requests.get(i)

    with open(i.split('/')[-1], 'wb') as wr:
        wr.write(fileGet.content)










