import numpy
import pandas
import configparser
import requests
import monetraFunctions

#Base Merchant account class. Built for eSelect merchants later
class merchant_account():
    def __init__(
        self, 
        user:str,
        merchNum:str,
        settleTime:str
    ):
        self.user = user
        self.merchNum = merchNum
        self.settleTime = settleTime


#EMV Class. Inherits Base Merchant.
class merchEMV(merchant_account):
    def __init__(
        self, 
        user:str,
        merchNum:str, 
        settleTime:str, 
        interacECR: str, 
        creditECR: str
    ):
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
    #Parse Merchant #, Monetra User, iECR, cECR, Settlement Time in "table" object
    table = pandas.read_excel(
        excelPath,
        sheet_name=sheetName,
        usecols="H,M,R,S,X",
        dtype={"H":str,"M":str,"R":str,"S":str,"X":str},
        skiprows=rowStart,
        nrows=rowCount
        )
    #Iterate over each row in "table"
    for i,row in table.iterrows():
        #Instantiate merchEMV Object using row data
        excelRow = merchEMV(row[1],row[0],row[4],row[2],row[3])        
        #Generate JSON Payload
        payload = (
            monetraFunctions.payloadGenerator(
                monetraFunctions.addMerchantAccountUser(
                    excelRow.user, 
                    excelRow.merchNum,
                    excelRow.interacECR,
                    0
                ),
                monetraFunctions.addMerchantAccountUser(
                    excelRow.user, 
                    excelRow.merchNum,
                    excelRow.creditECR,
                    1
                ),
                monetraFunctions.addMerchantSubUser(
                    excelRow.user
                ),
                monetraFunctions.addMerchantCronTask(
                    excelRow.user,
                    excelRow.settleTime
                )
            )
        )
        #POST
        monReq = requests.post(host,json=payload)
        print(monReq.text)

if __name__ == "__main__":
    main()