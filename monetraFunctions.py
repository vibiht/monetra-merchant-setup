from datetime import time
import json

def addMerchantAccountUser(
    user:str,
    merchNum:str,
    ecr:str,
    accountTier:int
):
    #Monetra_AIP_v8.17.0.pdf Section 4.3.1
    payload= {
        "action":"adduser",
        "username":"MADMIN",
        "password":"precise*3984052",
        "user":user,
        "pwd":user+"*3984052",
        "sub":accountTier,
        "proc":"spdh",
        "indcode":"RS",
        "cardtypes":"INTERAC",
        "mode":"BOTH",
        "email":"system.monitoring@preciserd.ca",
        "emv_entrymodes":"INTERAC_CONTACT|INTERAC_CONTACTLESS",
        "emv_termcaps":"OFFLINEPIN",
        "MERCHID":"00"+str(merchNum),
        "TERMID":ecr,
        "countrycode":"124",
        "currencycode":"124"
    }
    return (payload)

def addMerchantSubUser(
    user:str
):
    #Monetra_AIP_v8.17.0.pdf Section 5.1.1
    payload ={
                "action":"admin",
                "admin":"subuseradd",
                "username":user,
                "password":user+"*3984052",
                "user":user,
                "pwd":user+"*3984052",
                "admintypes":"GETPERMS|MERCHINFO|RECURRINGADD|IMAGEADD",
                "trantypes":"SALE|REVERSAL|VOID|TOREVERSAL|CARDTYPE|TERMLOAD|INTERACMAC|EMVCOMPLETE|ADMIN|CHKPWD",
                "userflags":"obscure|unattended"
            } 
    return (payload)

def addMerchantCronTask(
    user:str, 
    settleTime:str
):
    #Monetra_AIP_v8.17.0.pdf Section 5.10 
    payload = {
                "username":user,
                "password":user+"*3984052",
                "user":user,
                "pwd":user+"*3984052",
                "action":"admin",
                "admin":"cron",
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
    return (json.dumps(payload))