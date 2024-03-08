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


    if (final_move=='R'){
        std::cout << "It's a tie!" << std::endl;
        return nullptr;
    }

    else if (final_move=='P'){
        std::cout << player1->getName() << "Wins" << std::endl;
        return player1;
    }

    else{
        std::cout << "Computer Wins" << std::endl;
        return player2;
    }; 

}