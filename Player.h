#include <iostream>
#pragma once
using namespace std;
#include <string>
#include "Move.h"



class Player{

    protected:
    string user_name;
    char input_move;

    public:

    virtual Move* makeMove()=0;
    virtual string getName()=0;

};

