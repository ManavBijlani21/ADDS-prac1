#pragma once
#include <iostream>
#include "Player.h"


class Computer:public Player{
    private:

    public:
    virtual char makeMove();
    virtual string getName();

};

