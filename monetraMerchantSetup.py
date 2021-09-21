import pandas
import configparser
import requests
import monetraFunctions
import logging
import os
import datetime


def main():
    logPath = str(os.getcwd())+"\logs\{0}.txt"
    logging.basicConfig(
        filename=logPath.format(datetime.date.today())
        ,level=logging.INFO
        ,format="%(asctime)s %(message)s"
        , datefmt='%m/%d/%Y %I:%M:%S %p'
    )
    #Open and read monetraMerchanSetup.ini file
    config = configparser.ConfigParser()
    logging.info("Reading config from monetraMerchantSetup.ini")
    iniPath = str(os.getcwd())+"\config\monetraMerchantSetup.ini"
    config.read(iniPath)
    host=config.get("INPUT","host")
    excelPath=config.get("INPUT","filepath")
    sheetName=config.get("INPUT","sheetname")
    rowStart=config.getint("INPUT", "rowStart")
    rowCount=config.getint("INPUT", "rowCount")
    logging.info("Host = " + str(host))
    logging.info("Monetra Excel Path = " + str (excelPath))
    logging.info("Sheetname = " + str (sheetName))
    logging.info("Starting Row = " + str (rowStart))
    logging.info("Number of Rows = " + str (rowCount))
    #Parse Merchant #, Monetra User, iECR, cECR, Settlement Time in "table" object
    table = pandas.read_excel(
        excelPath,
        sheet_name=sheetName,
        usecols="H,K,M,R,S,X",
        dtype={"H":str,"K":str,"M":str,"R":str,"S":str,"X":str},
        skiprows=rowStart,
        nrows=rowCount
    )
    #Iterate over each row in "table"
    for i,row in table.iterrows():
        logging.info("Reading row #:" + str (rowStart + i+1))
        #Instantiate merchEMV Object using row data
        excelRow = monetraFunctions.merchEMV(row[0],row[1],row[2],row[3],row[4],row[5]) 
        logging.info("Row =" + str(excelRow))       
        #Generate JSON Payload
        logging.info("Generating JSON Payload")
        payload = (
            monetraFunctions.payloadGenerator(
                monetraFunctions.addMerchantAccountUser(
                    excelRow.user, 
                    excelRow.merchNum,
                    excelRow.interacECR,
                    0,
                    excelRow.device
                ),
                monetraFunctions.addMerchantAccountUser(
                    excelRow.user, 
                    excelRow.merchNum,
                    excelRow.creditECR,
                    1,
                    excelRow.device
                )
            )
        )
        logging.info("Payload = " + str(payload))
        #POST
        logging.info("Sending POST request to " + host)
        monReq = requests.post(host,data=payload,verify=False,allow_redirects=True)
        print(monReq.text)
        logging.info("Monetra Response: " + monReq.text)
         #Generate JSON Payload
        logging.info("Generating JSON Payload")
        payload = (
            monetraFunctions.payloadGenerator(
                monetraFunctions.addMerchantSubUser(
                    excelRow.user,
                    excelRow.device
                ),
                monetraFunctions.addMerchantCronTask(
                    excelRow.user,
                    excelRow.settleTime
                )
            )
        )
        logging.info("Payload = " + str(payload))
        #POST
        logging.info("Sending POST request to " + host)
        monReq = requests.post(host,data=payload,verify=False,allow_redirects=True)
        print(monReq.text)
        logging.info("Monetra Response: " + monReq.text)

if __name__ == "__main__":
    main()