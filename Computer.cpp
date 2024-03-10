#include "Player.h"
#include <iostream>
using namespace std;
#include "Computer.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

string Computer::getName(){

    return "Computer";
}


Move* Computer::makeMove(){
    srand(time(nullptr));
    vector<string> array_choices={"Rock","Scissors","Paper","Monkey","Robot","Pirate","Ninja","Zombie"};

    int random_index=rand() % array_choices.size();


    

    if (array_choices[random_index]=="Rock"){
        return new Rock();
    }

    else if(array_choices[random_index]=="Scissors"){
        return new Scissors();
    }

    else if(array_choices[random_index]=="Paper"){
        return new Paper();
    }

    else if(array_choices[random_index]=="Monkey"){
        return new Monkey();
    }

    else if(array_choices[random_index]=="Robot"){
        return new Robot();
    }

    else if(array_choices[random_index]=="Pirate"){
        return new Pirate();
    }

    else if(array_choices[random_index]=="Ninja"){
        return new Ninja();
    }

    else if(array_choices[random_index]=="Zombie"){
        return new Zombie();
    }

    else{
        return nullptr;
    }
}