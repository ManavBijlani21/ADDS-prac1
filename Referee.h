#pragma once 
#include <iostream> 
#include "Player.h"
#include "Human.h"
#include "Computer.h"


class Referee{

    public:
    Referee();
    Player* refGame(Player* player1,Player* player2);

    
};