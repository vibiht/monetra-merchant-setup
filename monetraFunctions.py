import json

#Base Merchant account class. Can be used for eSelect accounts. Unused for now
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
        merchNum:str,
        deviceFirm:str,      
        device:str, 
        user:str,   
        interacECR: str, 
        creditECR: str,
        settleTime:str
    ):
        super().__init__(user, merchNum,settleTime)
        self.interacECR = interacECR
        self.creditECR = creditECR
        self.device = device
        self.deviceFirm = deviceFirm

def addMerchantAccountUser(
    user:str,
    deviceFirm:str,
    merchNum:str,
    ecr:str,
    accountTier:int,
    device:str
):
    #Monetra_AIP_v8.17.0.pdf Section 4.3.1
    #Main Account vs Sub Account check
    if accountTier == 0:
        cardTypes="INTERAC"
        entryModes="INTERAC_CONTACT|INTERAC_CONTACTLESS"
    elif accountTier == 1 and deviceFirm.split()[0] == "TCPX":
        cardTypes="VISA+MC+AMEX+DISC+JCB"
        entryModes=("VISA_CONTACT|VISA_CONTACTLESS|MC_CONTACT|MC_CONTACTLESS|"
            "AMEX_CONTACT|AMEX_CONTACTLESS|DISC_CONTACT|DISC_CONTACTLESS|JCB_CONTACT|JCB_CONTACTLESS")
    elif accountTier == 1 and deviceFirm.split()[0] == "UCPX":
        cardTypes="VISA+MC+AMEX+DISC"
        entryModes=("VISA_CONTACT|VISA_CONTACTLESS|MC_CONTACT|MC_CONTACTLESS|"
            "AMEX_CONTACT|AMEX_CONTACTLESS|DISC_CONTACT")
    elif accountTier == 1 and deviceFirm.split()[0] == "CPX":
        cardTypes="VISA+MC+AMEX+DISC"
        entryModes=("VISA_CONTACT|VISA_CONTACTLESS|MC_CONTACT|MC_CONTACTLESS|"
            "AMEX_CONTACT|AMEX_CONTACTLESS|DISC_CONTACT")
    #MPS vs Unattended check
    if device =="MPS":
        indCode="R"
    else:
        indCode="RS"
    payload= {
        "action":"adduser",
        "username":"MADMIN",
        "password":"precise*3984052",
        "user":user,
        "pwd":user+"*3984052",
        "sub":accountTier,
        "proc":"spdh",
        "indcode":indCode,
        "cardtypes":cardTypes,
        "mode":"BOTH",
        "email":"system.monitoring@preciserd.ca",
        "emv_entrymodes":entryModes,
        "emv_termcaps":"NOSIG",
        "MERCHID":"00"+str(merchNum),
        "TERMID":ecr,
        "countrycode":"124",
        "currencycode":"124"
    }
    return (payload)

def addMerchantSubUser(
    user:str,
    device:str
):
    #Monetra_AIP_v8.17.0.pdf Section 5.1.1
    #MPS vs Unattended Check
    if device =="MPS":
        trantypes=("SALE|REVERSAL|VOID|RETURN|TOREVERSAL|CARDTYPE|TERMLOAD|"
        "INTERACMAC|EMVCOMPLETE|ADMIN|CHKPWD")
    else:
        trantypes=("SALE|REVERSAL|VOID|TOREVERSAL|CARDTYPE|TERMLOAD|INTERACMAC|"
            "EMVCOMPLETE|ADMIN|CHKPWD")
    payload ={
                "action":"admin",
                "admin":"subuseradd",
                "username":user,
                "password":user+"*3984052",
                "user":"online",
                "pwd":user+"*3984052",
                "admintypes":("GETPERMS|MERCHINFO|RECURRINGADD|IMAGEADD|"
                "CARDSHIELDPROVISION"),
                "trantypes":trantypes,
                "userflags":"obscure|unattended"
            } 
    return (payload)

def addMerchantCronTask(
    user:str, 
    settleTime:str
):
#Monetra_AIP_v8.17.0.pdf Section 5.10 
    payload = {
                "action":"admin",
                "admin":"cron",
                "username":user,
                "password":user+"*3984052",
                "user":"online",
                "pwd":user+"*3984052",
                "cron":"add",
                "cron_date":''.join(char for char in str(settleTime) if char.isalnum())[0:4]+"|*", #Removing special characters from time
                "cron_task":"settle"
            } 
    return (payload)

def payloadGenerator(
    *args
):
    payload={"MonetraTrans":{}}
    for i,element in enumerate(args):
        payload["MonetraTrans"][i]=element
    return (json.dumps(payload,indent=4))

