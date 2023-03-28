#ifndef WALLET_H
#define WALLET_H
#include <iostream>

class Wallet{
public:
    int money;

    Wallet();
    void setMoney(int intial);
    int getMoney();
    void takeMoney(int amountTaken);
    void addMoney(int amountAdded);   
};
#endif