import pandas
import configparser
import requests
import monetraFunctions
import logging

def main():
    logging.basicConfig(filename="log.txt",level=logging.INFO,format="%(asctime)s %(message)s", datefmt='%m/%d/%Y %I:%M:%S %p')
    #Open and read monetraMerchanSetup.ini file
    config = configparser.ConfigParser()
    logging.info("Reading config from monetraMerchantSetup.ini")
    config.read(r"monetraMerchantSetup.ini")
    host=config.get("INPUT","host")
    port=config.getint("INPUT","port")
    excelPath=config.get("INPUT","filepath")
    sheetName=config.get("INPUT","sheetname")
    rowStart=config.getint("INPUT", "rowStart")
    rowCount=config.getint("INPUT", "rowCount")
    logging.info("Host = " + str(host))
    logging.info("Port = " + str (port))
    logging.info("Monetra Excel Path = " + str (excelPath))
    logging.info("Sheetname = " + str (sheetName))
    logging.info("Starting Row = " + str (rowStart))
    logging.info("Number of Rows = " + str (rowCount))
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
        logging.info("Reading row #:" + str (rowStart + i+1))
        #Instantiate merchEMV Object using row data
        excelRow = monetraFunctions.merchEMV(row[1],row[0],row[4],row[2],row[3]) 
        logging.info("Row =" + str(excelRow))       
        #Generate JSON Payload
        logging.info("Generating JSON Payload")
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
                    excelRow.user
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