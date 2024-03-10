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


Move* Computer::makeMove(){

    string playerInput;

    cout<< "Enter Move: ";
    cin>> playerInput;

    if (playerInput=="Rock"){
        return new Rock();
    }

    else if(playerInput=="Scissors"){
        return new Scissors();
    }

    else if(playerInput=="Paper"){
        return new Paper();
    }

    else if(playerInput=="Monkey"){
        return new Monkey();
    }

    else if(playerInput=="Robot"){
        return new Robot();
    }

    else if(playerInput=="Pirate"){
        return new Pirate();
    }

    else if(playerInput=="Ninja"){
        return new Ninja();
    }

    else if(playerInput=="Zombie"){
        return new Zombie();
    }

    else{
        return nullptr;
    }
}