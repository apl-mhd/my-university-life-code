#https://indianpythonista.files.wordpress.com/2016/10/11.png
import  requests



imageUrl ='https://indianpythonista.files.wordpress.com/2016/10/11.png'


r = requests.get(imageUrl)


with open('logo.png', 'wb') as dobj:

    dobj.write(r.content)

