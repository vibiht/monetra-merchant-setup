# precise scripts
Tool to quickly setup Monetra Merchant User, Sub Account, Sub User, and CRON Task(Settlement).

Configurations are read from monetraMerchantSetup.ini
[INPUT]
host -> hostname of the destination Monetra w/ port 
        (Example: https://monetra.preciserd.com:8501 points to 10.5.5.20)
filepath -> filepath and file of your input. Should follow the same file 
            structure as Monetra Servers and Accounts.xlsx. Filename only is 
            acceptable if file is in application's root path, however full 
            pathname is better practice. 
            (Example: C:\Users\VTHIRU\Repositories\precise-scripts\MonetraInput.xlsx)
sheetname -> Sheetname of the =EMV
rowStart -> Starting row of input data, not including Header row. Index begins 
            at 0. (Example: 0 -> Starts from first data row)
rowCount -> Number of rows to process (Example: 4 -> Processes 4 rows including 
            starting row)

Log file is generated in application root path(log.txt) and will include 
payload(request) and response for each request.