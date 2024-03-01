#include "Human.h"
#include <iostream>
using namespace std;


Human::Human(){
    cin >> user_name;
}
char Human::makeMove(){
    
    cout << "Enter move: ";
    cin >> input_move;


    return input_move;

};

string Human::getName(){

    return user_name;
}