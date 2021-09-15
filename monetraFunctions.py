from datetime import time
import json

def addMerchantAccountUser(user:str, merchNum:str, interacECR:str, creditECR:str):
    #Monetra_AIP_v8.17.0.pdf Section 4.3.1
    payload = {
        "MonetraTrans": {
            "debitMerch": {
                "action":"adduser",
                "username":"MADMIN",
                "password":"precise*3984052",
                "user":user,
                "pwd":user+"*3984052",
                "sub":0,
                "proc":"spdh",
                "indcode":"RS",
                "cardtypes":"INTERAC",
                "mode":"BOTH",
                "email":"system.monitoring@preciserd.ca",
                "emv_entrymodes":"INTERAC_CONTACT|INTERAC_CONTACTLESS",
                "emv_termcaps":"OFFLINEPIN",
                "MERCHID":"00"+str(merchNum),
                "TERMID":interacECR,
                "countrycode":"124",
                "currencycode":"124"
            }, 
            "creditMerch": {
                "action":"adduser",
                "username":"MADMIN",
                "password":"precise*3984052",
                "user":user,
                "pwd":user+"*3984052",
                "sub":1,
                "proc":"spdh",
                "indcode":"RS",
                "cardtypes":"VISA+MC+AMEX+DISC+JCB",
                "mode":"BOTH",
                "email":"system.monitoring@preciserd.ca",
                "emv_entrymodes":"VISA_CONTACT|VISA_CONTACTLESS|MC_CONTACT|MC_CONTACTLESS|AMEX_CONTACT|AMEX_CONTACTLESS|DISC_CONTACT|DISC_CONTACTLESS|JCB_CONTACT|JCB_CONTACTLESS",
                "emv_termcaps":"OFFLINEPIN",
                "MERCHID":"00"+str(merchNum),
                "TERMID":creditECR,
                "countrycode":"124",
                "currencycode":"124"
            }, 
        }
    }
    return (json.dumps(payload))

def addMerchantSubUser(user:str):
    #Monetra_AIP_v8.17.0.pdf Section 5.1.1
    payload = {
        "MonetraTrans": {
            "subUser": {
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
        }
    }
    return (json.dumps(payload))

def addMerchantCronTask(user:str, settleTime:str):
    #Monetra_AIP_v8.17.0.pdf Section 5.10 
    payload = {
        "MonetraTrans": {
            "cronTask": {
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
        }
    }
    return (json.dumps(payload))