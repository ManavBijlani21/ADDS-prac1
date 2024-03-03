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

    Player* winner= referee.refGame(&player1,&player2);

    if (winner==&player1){
        std::cout << player1.getName() << "wins!" << std::endl;
    }

    else if(winner==&player2){
        std::cout << player2.getName() << "wins!" << std::endl;
    }

    else{
        std::cout << "It's a tie game!" << std::endl;
    }


    return 0;

}


