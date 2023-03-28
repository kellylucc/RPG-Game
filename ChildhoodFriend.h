//child class header file
#ifndef CHILDHOODFRIEND_H
#define CHILDHOODFRIEND_H
#include "Character.h"
#include <iostream>
using namespace std;

class ChildhoodFriend:public Character {
public:
    ChildhoodFriend(string _n);
    void MakeDialogue();
    void Date();
};
#endif