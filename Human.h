#pragma once
#include <iostream>
#include "Player.h"
using namespace std;



class Human:public Player{
    protected:
    char input_move;
    string user_name;


    public:
    Human();
    Move* makeMove() override;
    string getName() override;

};

