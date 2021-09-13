import numpy as np
import pandas as pd


class merchant_account():
    def __init__(self, user:str,merchNum:str):
        self.user = user
        self.merchNum = merchNum
    
class merchEMV(merchant_account):
    def __init__(self, user:str,merchNum:str, interacECR: str, creditECR: str):
        super().__init__(user, merchNum)
        self.interacECR = interacECR
        self.creditECR = creditECR

def main():
    f - open("")