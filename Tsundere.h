//child class header file
#ifndef TSUNDERE_H
#define TSUNDERE_H
#include "Character.h"
#include <iostream>
using namespace std;

class Tsundere:public Character {
public:
    Tsundere(string _n);
    void MakeDialogue();
    void Date();
};
#endif