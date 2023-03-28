//include libraries
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
//include header files
#include "Character.h"
#include "ChildhoodFriend.h"
#include "Tsundere.h"
#include "RichGuy.h"
#include "Wallet.h"

using namespace std;
extern int end(int, int, int, int, int, int);
extern int shop();

/* This function contains the main structure of the game. 
At the end, it calls end() to display the appropriate ending. */

int game(string name) {
    //polymorphism
    Character* childhood_friend=new ChildhoodFriend(name);
    Character* tsundere=new Tsundere(name);
    Character* rich_guy=new RichGuy(name);
    Character* characters[3]={childhood_friend, tsundere, rich_guy};
    Wallet player; //create wallet for player
    player.setMoney(10); //call wallet function
//declare variables
    int day;
    int choice;
    string shop_choice; //shop choice initialised as a string for defensive programming purposes
    int shop_num;
    int rand_num;
    string daily_choice="n";
    string choice_confirm="n";
    string date_choice;

    cout<<"You only have 7 days to find a boyfriend.\n";
    usleep(500000);
    cout<<"Your options are Thomas (childhood friend), Bob (tsundere) and Eric (rich guy).\n";
    usleep(500000);
    cout<<"Good luck finding a boyfriend!\n\n";
    usleep(500000);

    cout<<"===================\n";
    cout<<"~~~~GAME START!~~~~\n";
    cout<<"===================\n\n";

    //for loop for 7 days - player can decide what they do for 7 days
    for (day=1; day<8; day++) {
        while (choice_confirm != "y") {
            daily_choice="0";
            //if the yser inputs anything but 1, 2 or 3, the system will repeat itself
            while (daily_choice != "1" && daily_choice != "2" && daily_choice != "3" && daily_choice != "4") {
                cout<<"Day: "<<day<<"\n";
                cout<<"It is a new day. Where do you want to go?\n"<<
                "1) Spend some time with Thomas. \n"<<
                "2) Spend some time with Bob. \n"<<
                "3) Spend some time with Eric. \n"<<
                "4) To work.\n"<<
                "5) To shop for items.\n"<<
                "6) Check your stats.\n"<<
                "Enter the number: ";
                cin>>daily_choice;
                if (daily_choice == "6") {
                    cout<<"==================================\n";
                    cout<<name<<"'s Menu:\n";
                    cout<<11-day<<"day(s) left\n";
                    cout<<"Money: $"<<player.getMoney()<<endl;
                    cout<<"Your exp with Thomas: "<<childhood_friend->love_lvl<<endl;
                    cout<<"Successful dates with Thomas: "<<childhood_friend->date_num<<endl;
                    cout<<"Your exp with Bob: "<<tsundere->love_lvl<<endl;
                    cout<<"Successful dates with Bob: "<<tsundere->date_num<<endl;
                    cout<<"Your exp with Eric: "<<rich_guy->love_lvl<<endl;
                    cout<<"Successful dates with Eric: "<<rich_guy->date_num<<endl;
                    cout<<"===================================\n\n";
                    usleep(500000);
                } else if (daily_choice == "5") {
                    cout<<"You go to buy stuff at the gift shop.\n\n";
                    shop_choice="0";
                    while (shop_choice!="1" && shop_choice!="2" && shop_choice!="3") {
                        cout<<"Who do you want to buy it for?\n";
                        cout<<"1) Thomas\n2) Bob\n3) Eric\n";
                        cout<<"Enter the corresponding number: ";
                        cin>>shop_choice; //player input assigned to shop_choice variable as a string type
                    }
                    shop_num=shop();
                    if (shop_choice=="1") {
                        childhood_friend->love_lvl+=shop_num;
                    } else if (shop_choice=="2") {
                        tsundere->love_lvl+=shop_num;
                    } else if (shop_choice=="3") {
                        rich_guy->love_lvl+=shop_num;
                    }
                    player.takeMoney(shop_num);
                    if (player.money<0) {
                        //if player has no money, they have no choice but to go to work
                        cout<<"Uh oh, looks like you're broke and in debt!\n";
                        cout<<"You can only go to work now.";
                        daily_choice="4";
                    }
                }
            }
            choice_confirm="y";
        }
        if (daily_choice=="1") {
            cout<<"You spend some time with Thomas.\n\n";
            characters[0]->MakeDialogue();
            if (childhood_friend->love_lvl >3) {
                cout<<"You have a chance to have a date with childhood friend!\n"<<
                "Do you want to have a date? (y/n): ";
                cin>>date_choice; //player input assigne to date_choice
                if (date_choice=="y") {
                    characters[0]->Date();
                }
            }
        } else if (daily_choice=="2") {
            cout<<"You spend some time with Bob.\n";
            characters[1]->MakeDialogue();
            if (tsundere->love_lvl >3) {
                cout<<"You have a chance to have a date with tsundere!\n"<<
                "Do you want to have a date? (y/n): ";
                cin>>date_choice;
                if (date_choice=="y") {
                    characters[1]->Date();
                }
            }
        } else if (daily_choice=="3") {
            cout<<"You spend some time with Eric.\n";
            characters[2]->MakeDialogue();
            if (rich_guy->love_lvl >3) {
                cout<<"You have a chance to have a date with sugar daddy!\n"<<
                "Do you want to have a date? (y/n): ";
                cin>>date_choice;
                if (date_choice=="y") {
                    characters[2]->Date();
                }
            }
        } else if (daily_choice=="4") {
            cout<<"You have chosen to go to work for the day.\n";
            if (player.money<0) { //if player has negative money will earn back during work
                player.setMoney(0); //set money to 0
                cout<<"You earned: $1\n";
            } else { //if player has more than 0, will learn between 1 to 3 dollars
                rand_num=rand()%3+1;
                player.addMoney(rand_num);
                cout<<"You earned: $"<<rand_num<<endl;
            }
        } 
        cout<<endl;
        daily_choice="0";
        choice_confirm="n";
    }


    //love levels and date numbers
    int child_lvl = childhood_friend->love_lvl;
    int tsun_lvl = tsundere->love_lvl;
    int rich_lvl = rich_guy->love_lvl;
    int child_date = childhood_friend->date_num;
    int tsun_date = tsundere->date_num;
    int rich_date = rich_guy->date_num;

    
    //call end function with arguments as love levels and dates
    end(child_lvl, tsun_lvl, rich_lvl, child_date, tsun_date, rich_date);
    return 0;
}
