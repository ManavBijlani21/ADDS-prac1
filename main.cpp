#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Move.h"
using namespace std;

//This is the main file for the program

int main(){

    //Declare the instances of two players
    Human Player1;
    Human Player2;


    //Take the user_name input
    string player1_name=Player1.getName();
    string player2_name=Player2.getName();

    //Pass the two users as a reference to the Referee class
    Referee referee;

    Player* Winner=referee.refGame(&Player1,&Player2);


    //Conditional statements to check who wins and print the desired result
    if (Winner==nullptr){
        cout << "The game is tied!" << endl;
    }

    else if(Winner->getName()==player1_name){
        cout << player1_name << " Wins the game!" << endl;
    }

    else{
        cout << player2_name << "Wins the game!" << endl;
    }
}


