#include <iostream>
#include "Human.h"
#include "Move.h"
using namespace std;



Human::Human(){
    cout<< "Enter the name of Player: ";
    cin >> user_name;
}


string Human::getName(){

    return user_name;
}

Move* Human::makeMove(){

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