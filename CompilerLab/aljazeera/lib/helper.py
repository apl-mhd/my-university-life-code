import os
import  ssl

from datetime import  datetime
from . import log

def verifyHttpsIssue():
    if (not os.environ.get('PYTHONHTTPSVERIFY', '') and getattr(ssl, '_create_unverified',None)):
        ssl._create_default_https_context = ssl._create_unverified_context


def writeWebPageAsHtml(fileName, data=''):
    try:
        with open('filename', 'wb') as fobj:
            fobj.write(data)
    except Exception as e:

        print(e)
        log.report(e)
        return  False
    else:
        return  True


def readWebPageAsHtml(fileName):


    try:
        with open('filename', 'wb') as fobj:
            data = fobj.read()

    except Exception as e:

        print(e)
        log.report(e)
        return  False
    else:
        return  data





def getLastScrapedTime(fileName):

    if not os.path.exists(fileName):
        return -1

    fileTime = os.path.getatime(fileName)
    now = datetime.timestamp(datetime.now())

    diff = now -fileTime

    minutes = int(round(diff / 60))

    return  minutes



def check_cache(fileName, cacheTime):

    scrappingTime = getLastScrapedTime(fileName)

    if scrappingTime < 0 or scrappingTime > cacheTime:
        return  True


    return  False
