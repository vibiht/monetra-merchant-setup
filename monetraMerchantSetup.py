import numpy
import pandas
import configparser
import urllib.request
import monetraFunctions

class merchant_account():
    def __init__(self, user:str,merchNum:str,settleTime:str):
        self.user = user
        self.merchNum = merchNum
        self.settleTime = settleTime
    
class merchEMV(merchant_account):
    def __init__(self, user:str,merchNum:str, settleTime:str, interacECR: str, creditECR: str):
        super().__init__(user, merchNum,settleTime)
        self.interacECR = interacECR
        self.creditECR = creditECR

def main():
    #Open and read monetraMerchanSetup.ini file
    config = configparser.ConfigParser()
    config.read(r"monetraMerchantSetup.ini")
    host=config.get("INPUT","host")
    excelPath=config.get("INPUT","filepath")
    sheetName=config.get("INPUT","sheetname")
    rowStart=config.getint("INPUT", "rowStart")
    rowCount=config.getint("INPUT", "rowCount")
    #Parse Merchant #, Monetra User, iECR, cECR, Settlement Time
    sheet = pandas.read_excel(excelPath,sheetName,usecols="H,M,R,S,X",dtype={"H":str,"M":str,"R":str,"S":str,"X":str},skiprows=rowStart,nrows=rowCount)
    #w

    for index,row in sheet.iterrows():
        excelRow = merchEMV(row[1],row[0],row[4],row[2],row[3])
        print (monetraFunctions.addMerchantAccountUser(excelRow.user, excelRow.merchNum,excelRow.interacECR,excelRow.creditECR))
        print (monetraFunctions.addMerchantSubUser(excelRow.user))
        print (monetraFunctions.addMerchantCronTask(excelRow.user,excelRow.settleTime))
if __name__ == "__main__":
    main()