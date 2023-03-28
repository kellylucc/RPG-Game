#include <iostream>
#include <string>
#include <unistd.h>
//include header files for each character
#include "Character.h"
#include "ChildhoodFriend.h"
#include "Tsundere.h"
#include "RichGuy.h"
using namespace std;

extern int end(int child, int tsundere, int rich_guy, int cdate, int tdate, int rdate) {
    if ((child >= 10 && child <=25) && (tsundere >= 10 && tsundere <=25) && (rich_guy >= 10 && rich_guy <=25)) { //if love level is too high with multiple guys, you will get bad ending
        cout<<"Bad end: you're dating too many dudes\n";
    } else if ((child >= 0 && child <=10) && (tsundere >= 0 && tsundere <=10) && (rich_guy >= 0 && rich_guy <=10)) { //player did not earn enough points for any characteres
        cout<<"Bad end: you're 4ever alone\n";
        //good endings - more than 20 points with a character.
    } else if (child > 25) {
        cout<<"Thomas: I've always loved you, will you be my girlfriend?"<<endl;
        usleep(200000);
        cout<<"GOOD END - YOU ENDED UP WITH YOUR CHILDHOOD FRIEND"<<endl;
    } else if (tsundere > 25) {
        cout<<"Bob: I-It's not like I like you or anything, but do you wanna be my girlfriend or something?"<<endl;
        usleep(200000);
        cout<<"GOOD END - YOU ENDED UP WITH BOB"<<endl;
    } else if (rich_guy > 25) {
        cout<<"Eric: I'll give you everything you ever wanted and more...I love you"<<endl;
        usleep(200000);
        cout<<"Eric whispers into my ear as he hands me several credit cards."<<endl;
        usleep(200000);
        cout<<"GOOD END - YOU ENDED UP WITH A RICH GUY"<<endl;
    }

    cout<<"\n===================================\n";
    cout<<"FINAL STATISTICS\n";
    cout<<"Your love levels with...\n";
    cout<<"Thomas: "<<child<<endl;
    cout<<"Bob: "<<tsundere<<endl;
    cout<<"Eric: "<<rich_guy<<endl;
    cout<<"The number of dates you've had with...";
    cout<<"Thomas: "<<cdate<<endl;
    cout<<"Bob: "<<tdate<<endl;
    cout<<"Eric: "<<rdate<<endl;
    cout<<"====================================\n";
    return 0;
}



