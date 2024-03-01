#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;

Referee::Referee(){
    //Do nothing
};

Player* Referee::refGame(Player* player1,Player* player2){
    
    if (player1->makeMove()=='S'){
        return player2;
    }

    else if (player1->makeMove()=='P'){
        return player1;
    }

    else{
        return nullptr;
    }
}