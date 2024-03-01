#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;
#include "Human.h"
#include "Computer.h"

Referee::Referee(){
    //Do nothing
};

Player* Referee::refGame(Player* player1,Player* player2){


    char final_move=player1->makeMove();
    
    if (final_move=='S'){
        return player2;
    }

    else if (final_move=='P'){
        return player1;
    }

    else{
        return nullptr;
    }
}