#include "Human.h"
#include <iostream>
using namespace std;

char Human::makeMove(){
    
    char input_move;
    cout << "Enter move:";
    cin >> input_move;


    return input_move;

};

string Human::getName(){

    string user_name;
    cout << "Enter the name of the player:";
    cin >> user_name;

    return user_name;
}