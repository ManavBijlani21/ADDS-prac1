#include "Player.h"
#include <iostream>
using namespace std;
#include "Computer.h"

Computer::Computer(){
    user_name="Computer";
}

string Computer::getName(){

    user_name="Computer";

    return user_name;
}


char Computer::makeMove(){

    return 'R';
}