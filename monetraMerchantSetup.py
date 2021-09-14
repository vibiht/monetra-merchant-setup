from datetime import time
import numpy
import pandas
import configparser
import urllib.request
import json
from monetraFunctions import *

class merchant_account():
    def __init__(self, user:str,merchNum:str,settleTime:str):
        self.user = user
        self.merchNum = merchNum
        self.settleTime = settleTime
    
class merchEMV(merchant_account):
    def __init__(self, user:str,merchNum:str, settleTime:time, interacECR: str, creditECR: str):
        super().__init__(user, merchNum,settleTime)
        self.interacECR = interacECR
        self.creditECR = creditECR

def main():
    config = configparser.ConfigParser()
    config.read(r"monetraMerchantSetup.ini")
    host=config.get("INPUT","host")
    excelPath=config.get("INPUT","filepath")
    sheetName=config.get("INPUT","sheetname")
    rowStart=config.getint("INPUT", "rowStart")
    rowCount=config.getint("INPUT", "rowCount")
    #Parse Merchant #, Monetra User, iECR, cECR, Settlement Time
    sheet = pandas.read_excel(excelPath,sheetName,usecols="H,M,R,S,X",dtype={"H":str,"M":str,"R":str,"S":str,"X":time},skiprows=rowStart,nrows=rowCount)

    for index,row in sheet.iterrows():
        excelRow = merchEMV(row[1],row[0],row[4],row[2],row[3])
        print (addMerchantAccountUser(excelRow.user, excelRow.merchNum,excelRow.interacECR,excelRow.creditECR))

if __name__ == "__main__":
    main()