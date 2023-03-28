#include "Wallet.h"
#include <iostream>

Wallet::Wallet(){
    money=10; 
}

void Wallet::setMoney(int initial){
    money=initial;
}

int Wallet::getMoney(){
    return money;
}

void Wallet::takeMoney(int amountTaken){
    money=money-amountTaken;
}

void Wallet::addMoney(int amountAdded) {
    money=money+amountAdded;
}