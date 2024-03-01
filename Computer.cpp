#include "Player.h"
#include <iostream>
using namespace std;
#include "Computer.h"

string Computer::getName(){

    user_name="Computer";

    return user_name;
}


char Computer::makeMove(){

    input_move='R';

    return input_move;
}