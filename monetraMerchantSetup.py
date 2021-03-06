import configparser
from datetime import date
import logging
from os import getcwd

import numpy
import pandas
from requests import post

import monetraFunctions


def main():
    logPath = str(getcwd()) + "\\logs\\{0}.txt"
    logging.basicConfig(
        filename=logPath.format(date.today()), level=logging.INFO, format="%(asctime)s %(message)s", datefmt='%m/%d/%Y %I:%M:%S %p'
    )
    # Open and read monetraMerchanSetup.ini file
    config = configparser.ConfigParser()
    logging.info(
        "------------------------------------------------------------")
    logging.info("Reading config from monetraMerchantSetup.ini")
    iniPath = str(getcwd()) + "\\config\\monetraMerchantSetup.ini"
    config.read(iniPath)
    host = config.get("INPUT", "host")
    excelPath = config.get("INPUT", "filepath")
    sheetName = config.get("INPUT", "sheetname")
    rowStart = config.getint("INPUT", "rowStart")
    rowCount = config.getint("INPUT", "rowCount")
    logging.info("Host = " + str(host))
    logging.info("Monetra Excel Path = " + str(excelPath))
    logging.info("Sheetname = " + str(sheetName))
    logging.info("Starting Row = " + str(rowStart))
    logging.info("Number of Rows = " + str(rowCount))
    # Parse Merchant #, Monetra User, iECR, cECR, Settlement Time in "table"
    # object
    table = pandas.read_excel(
        excelPath,
        sheet_name=sheetName,
        usecols="H,J,K,M,R,S,X",
        dtype={"H": str, "J": str, "K": str, "M": str, "R": str, "S": str, "X": str},
        skiprows=rowStart,
        nrows=rowCount
    )
    # Iterate over each row in "table"
    for i, row in table.iterrows():
        logging.info("Reading row #:" + str(rowStart + i + 1))
        # Instantiate merchEMV Object using row data
        excelRow = monetraFunctions.merchEMV(
            row[0], row[1], row[2], row[3], row[4], row[5], row[6])
        logging.info("Row =" + str(excelRow))
        # Generate JSON Payload
        logging.info("Generating JSON Payload")
        payload = (
            monetraFunctions.payloadGenerator(
                monetraFunctions.addMerchantAccountUser(
                    excelRow.user,
                    excelRow.deviceFirm,
                    excelRow.merchNum,
                    excelRow.interacECR,
                    0,
                    excelRow.device
                ),
                monetraFunctions.addMerchantAccountUser(
                    excelRow.user,
                    excelRow.deviceFirm,
                    excelRow.merchNum,
                    excelRow.creditECR,
                    1,
                    excelRow.device
                )
            )
        )
        logging.info("Payload = " + payload)
        # POST
        logging.info("Sending POST request to " + host)
        monReq = post(
            host, 
            data=payload, 
            verify=False, 
            allow_redirects=True
        )
        print(monReq.text)
        logging.info("Monetra Response: " + monReq.text)
        # Generate JSON Payload
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
        logging.info("Payload = " + payload)
        # POST
        logging.info("Sending POST request to " + host)
        monReq = post(
            host, 
            data=payload, 
            verify=False, 
            allow_redirects=True
        )
        print(monReq.text)
        logging.info("Monetra Response: " + monReq.text)


if __name__ == "__main__":
    main()
