#pragma once
#include <iostream>
#include "Player.h"
#include "Move.h"
using namespace std;


class Computer:public Player{
    protected:

    char input_move;
    string user_name;

    public:
    Computer();
    Move*  makeMove() override;
    string getName() override;

};

