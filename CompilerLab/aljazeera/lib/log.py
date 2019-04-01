import  logging

def setCustomLogInfo(fileName):
    logging.basicConfig(fileName= fileName, level=logging.INFO)


def report(e:Exception):
    logging.exception(str(e))