#pragma once
#include <iostream>
#include "Player.h"
#include "Move.h"


class Computer:public Player{
    protected:

    char input_move;
    std::string user_name;

    public:
    Move*  makeMove() override;
    std::string getName() override;

};

