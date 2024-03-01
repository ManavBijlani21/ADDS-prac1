#include <iostream>
#pragma once
using namespace std;
#include <string>



class Player{

    protected:
    string user_name;
    char input_move;

    public:

    virtual char makeMove()=0;
    virtual string getName()=0;

};

