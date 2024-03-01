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

    string name_player1=player1.getName();

    Player* winner=referee.refGame(&player1,&player2);

    if (winner->getName()==name_player1){
        std::cout << name_player1 << " Wins" << std::endl;

    }

    else if (winner->getName()=="Computer"){
        std::cout << "Computer Wins" << std::endl;
    }

    else{
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
}


