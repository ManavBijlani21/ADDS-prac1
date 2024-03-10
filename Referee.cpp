#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;
#include "Human.h"
#include "Computer.h"
#include "Move.h"


Player* Referee::refGame(Player* player1,Player* player2){

    Move* move_object_1=player1->makeMove();
    Move* move_object_2=player2->makeMove();

    if ((!(move_object_1->Movelogic(move_object_1->getName(),move_object_2->getName()))) && (!(move_object_2->Movelogic(move_object_2->getName(),move_object_1->getName())))){
        // delete move_object_1;
        // delete move_object_2;
        return nullptr;
    }

    else if(move_object_1->Movelogic(move_object_1->getName(),move_object_2->getName())){

        // delete move_object_1;
        // delete move_object_2;
        return player1;

    }

    else{
        return player2;
    }

}







