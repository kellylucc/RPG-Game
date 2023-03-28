#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
using namespace std;

class Character {
public:
    //variable definition
    int love_lvl;//love level to be kept track of during gameplay
    string name;
    string option;//the value for option will be overwritten after every new choice is made through game
    int date_num;
    int count;

    
    //function definition
    Character(string _n);
    void setName(string _n);
    string getName();
    virtual void MakeDialogue()=0;
    virtual void Date()=0;
};
#endif
