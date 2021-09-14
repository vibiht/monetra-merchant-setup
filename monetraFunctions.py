import json

def addMerchantAccountUser(user:str, merchNum:str, interacECR:str, creditECR:str):
    #Monetra_AIP_v8.17.0.pdf Section 4.3.1
    if accountHierarchy == 0:
        cardTypes="INTERAC"
        entryModes="INTERAC_CONTACT|INTERAC_CONTACTLESS"
    else:
        cardTypes="VISA+MC+AMEX+DISC+JCB"
        entryModes="VISA_CONTACT|VISA_CONTACTLESS|MC_CONTACT|MC_CONTACTLESS|AMEX_CONTACT|AMEX_CONTACTLESS|DISC_CONTACT|DISC_CONTACTLESS|JCB_CONTACT|JCB_CONTACTLESS"

    payload = {
        "debitMerch": {
            "action":"adduser",
            "user":user,
            "pwd":user+"*3984052",
            "sub":0,
            "proc":"spdh",
            "indcode":"RS",
            "cardtypes":"INTERAC",
            "mode":"BOTH",
            "email":"system.monitoring@preciserd.ca",
            "emv_entrymodes":"INTERAC_CONTACT|INTERAC_CONTACTLESS",
            "MERCHID":"00"+merchNum,
            "TERMID":interacECR,
            "countrycode":"124",
            "currencycode":"124"}, 
        "creditMerch": {
            "action":"adduser",
            "user":user,
            "pwd":user+"*3984052",
            "sub":1,
            "proc":"spdh",
            "indcode":"RS",
            "cardtypes":"VISA+MC+AMEX+DISC+JCB",
            "mode":"BOTH",
            "email":"system.monitoring@preciserd.ca",
            "emv_entrymodes":"VISA_CONTACT|VISA_CONTACTLESS|MC_CONTACT|MC_CONTACTLESS|AMEX_CONTACT|AMEX_CONTACTLESS|DISC_CONTACT|DISC_CONTACTLESS|JCB_CONTACT|JCB_CONTACTLESS",
            "MERCHID":"00"+merchNum,
            "TERMID":creditECR,
            "countrycode":"124",
            "currencycode":"124"}, 
            }
    return (json.dumps(payload))

def addMerchantSubUser():
    #Monetra_AIP_v8.17.0.pdf Section 5.1.1
    pass

def addMerchantCronTask():
    #Monetra_AIP_v8.17.0.pdf Section 5.10 
    pass