#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "Move.h"



class Player{

    protected:
    string user_name;
    char input_move;

    public:

    virtual Move* makeMove()=0;
    virtual string getName()=0;

};

