import numpy as np
import pandas as pd
import configparser as cp
import urllib.request as urlReq
import json
import monetraFunctions

class merchant_account():
    def __init__(self, user:str,merchNum:str):
        self.user = user
        self.merchNum = merchNum
    
class merchEMV(merchant_account):
    def __init__(self, user:str,merchNum:str, interacECR: str, creditECR: str):
        super().__init__(user, merchNum)
        self.interacECR = interacECR
        self.creditECR = creditECR

def main():
    config = cp.ConfigParser()
    #Config.read(r"C:\Users\VTHIRU\Repositories\precise-scripts\monetraMerchantSetup.ini")
    config.read(r"monetraMerchantSetup.ini")
    host=config.get("INPUT","host")
    excelPath=config.get("INPUT","filepath")
    sheetName=config.get("INPUT","sheetname")
    rowStart=config.getint("INPUT", "rowStart")
    rowCount=config.getint("INPUT", "rowCount")
    #Parse Merchant #, Monetra User, iECR, cECR
    sheet = pd.read_excel(excelPath,sheetName,usecols="H,M,R,S",dtype={"H":str,"M":str,"R":str,"S":str},skiprows=rowStart,nrows=rowCount)

    for index,row in sheet.iterrows():
        excelRow = merchEMV(row[1],row[0],row[2],row[3])
        print (excelRow.user)
        print (excelRow.merchNum)
        print (excelRow.interacECR)
        print (excelRow.creditECR)

if __name__ == "__main__":
    main()