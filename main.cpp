#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

//This is the main file for the program

int main(){

    //Creating the instances of human and computer

    Human player1;
    Computer player2;
    Referee referee;

    Player* winner=referee.refGame(&player1,&player2);

    if (winner==nullptr){
        std::cout << "It's a Tie" << std::endl;
    }

    else if (winner->getName()!="Computer"){
        std::cout << player1.getName() << " Wins" << std::endl;

    }

    else {
        std::cout << "Computer Wins" << std::endl;
    }

    return 0;
}


