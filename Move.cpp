#include "Move.h"
#include "Player.h"
#include <iostream>
using namespace std;
#include <string.h>



string Rock::getName(){

    return "Rock";


}

bool Rock::Movelogic(string player1_move,string player2_move){
    
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}


string Paper::getName(){

    return "Paper";

    
}

bool Paper::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}


string Scissors::getName(){

    return "Scissors";

    
}

bool Scissors::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}


string Monkey::getName(){

    return "Monkey";

    
}

bool Monkey::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}


string Robot::getName(){

    return "Robot";

    
}

bool Robot::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}


string Pirate::getName(){

    return "Pirate";

    
}

bool Pirate::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}

string Ninja::getName(){

    return "Ninja";

    
}

bool Ninja::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}


string Zombie::getName(){

    return "Zombie";

    
}


bool Zombie::Movelogic(string player1_move,string player2_move){
    auto it=find(defeat_list.begin(),defeat_list.end(),player2_move);

    if (it!=defeat_list.end()){
        return true;
    }

    else{
        return false;
    }
}






