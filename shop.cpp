#include <iostream>
#include <string>
#include <unistd.h>
#include "Character.h"
#include "ChildhoodFriend.h"
#include "Tsundere.h"
#include "RichGuy.h"
#include "Wallet.h"
using namespace std;

int shop() {
    string choice;
    int love_increase;
    string choice_confirm="n";
    string items[3]={"chocolate", "flowers", "watch"};
    
    while (choice_confirm != "y") {
        choice="0";
        while (choice != "1" && choice != "2" && choice != "3") {
            cout<<"What do you want to get?\n";
            cout<<"1)Chocolate\n2)Flowers\n3)Watch\n";
            cout<<"Enter the corresponding number for each gift: ";
            cin>>choice;
            while (choice!="1" && choice!="2" && choice!="3") {
                cout<<"Enter 1, 2 or 3: "<<endl;
                cin>>choice;
            }
        }
        cout<<"Are you sure you want to buy "<<items[stoi(choice)-1]<<"? (y/n): ";
        cin>>choice_confirm;
    }

    if (choice=="1") {
        return 1;
    } else if (choice=="2") {
        return 2;
    } else if (choice=="3") {
        return 3;
    } else {
        return 0;
    }
}