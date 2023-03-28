#include <iostream>
#include <string>
#include <unistd.h>
//include all header files
#include "Character.h"
#include "ChildhoodFriend.h"
#include "Tsundere.h"
#include "RichGuy.h"
using namespace std;
extern int game(string);

/* The main function houses the structure of the program.
It contains the introduction and calls the function game(). */

int main() { 
    string name;            //stores user's name
    string character;       //stores character choice
    string choice_confirm;  //var for confirming user selections

    //introduction of the game
    cout<<"\n========================\n";
    cout<<"BEST DATING SIM GAME\n";
    cout<<"2021 OOP MAJOR PRACTICAL\n";
    cout<<"========================\n\n";
    usleep(500000);

    cout<<"Welcome to the best dating sim game!\n\n";
    usleep(500000);

    //user can choose to skip the introduction
    do {
		cout<<"Do you want to go through a brief introduction of the game? (y/n): ";
		cin>>choice_confirm;
    } while (choice_confirm != "y" && choice_confirm != "n");
    if (choice_confirm == "y") {
        cout<<"INTRODUCTION:\n";
        cout<<"This game is a dating simulator, which means the objective of the game is to build a relationship with a character.\n";
        usleep(500000);
        cout<<"In this game, there are 3 different types of guys you can choose to know.\n";
        usleep(500000);
        cout<<"This includes the childhood friend, the tsundere and the rich guy.\n";
        usleep(500000);
        cout<<"Each character offers a unique story and special game mechanics.\n";
        usleep(500000);
        cout<<"Depending on how you played through the game, a different ending will appear.\n";
        usleep(500000);
        cout<<"You will be using the terminal to input your choices, and the game will remind you the method of inputting your choice.\n";
        usleep(500000);
        cout<<"For example: if you see '(y/n)', that means you enter either 'y' for 'yes', or 'n' for 'no'.\n";
        usleep(500000);
        cout<<"That concludes the end of the introduction. Enjoy the game!\n\n";
    } else {
        cout<<"You have skipped the introduction.\n\n";
    }
    usleep(500000);

    //user enters name
    do {
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Your name is "<<name<<", is that right? (y/n): ";
		cin>>choice_confirm;
    } while (choice_confirm != "y");
    cout<<"Hi "<<name<<"!\n\n";
    usleep(500000);

    cout<<"Let's start the game!\n\n";
    game(name);

    return 0;
}
