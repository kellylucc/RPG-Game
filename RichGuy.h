//child class header file 
#ifndef RICHGUY_H
#define RICHGUY_H
#include "Character.h"
#include <iostream>
using namespace std;

class RichGuy:public Character {
public:
    RichGuy(string _n);
    void MakeDialogue();
    void Date();
};
#endif