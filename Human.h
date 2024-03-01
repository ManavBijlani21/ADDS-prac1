#include "Player.h"
#include <iostream>
using namespace std;



class Human:public Player{
    private:


    public:
    virtual char makeMove();
    virtual string getName();

};

