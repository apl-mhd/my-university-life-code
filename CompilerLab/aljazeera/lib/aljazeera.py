from urllib.request import  urlopen
from  bs4 import BeautifulSoup

from . import helper

cache = 3

urlAj = 'https://www.aljazeera.com/'
rawHtml = 'html/aj.html'
outputHtml = 'html/simplenews.html'


class Aljazeera:
    _url = ''
    _data = ''
    _log = None
    _soup = None

    def __init__(self,url,log):
        self._url = url
        self._log = log

    def retrieveWebpage(self):
        try:
            html = urlopen(self._url)

        except Exception as  e:
            print(e)
            self._log.report(str(e))
        else:
            self._data = html.read()
            if len(self._data) > 0 :
                print("retrieve successfully")


    def writeWebpageAsHtml(self, filePath = rawHtml, data=''):

        if data is '':
            data = self._data

        helper.writeWebPageAsHtml(filePath,data)




    def readWebPageFromHtml(self, filePath = rawHtml):

        self._data = helper.readWebPageAsHtml(filePath)


    def changeUrl(self, url):

        self._url = url;


    def printDate(self):
        print(self._data)



    def convertDataTobs4(self):
        self._soup = BeautifulSoup(self._data, "html.parser")


    def parse_soup_to_imple_html(self):

        newsList = self._soup.findAll(['h1','h2','h3','h4','h5','h6'])







