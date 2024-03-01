#pragma once
#include <iostream>
#include "Player.h"
using namespace std;


class Computer:public Player{
    protected:

    char input_move;
    string user_name;

    public:
    char makeMove();
    string getName();

};

