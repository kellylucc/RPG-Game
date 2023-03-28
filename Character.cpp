//parent class

#include "Character.h"
#include <iostream>
using namespace std;

Character::Character(string _n) {
    name=_n;
};

void Character::setName(string _n) {
    name=_n; //set name of the character
};

string Character::getName() {
    return name; //returns name of the player
};
