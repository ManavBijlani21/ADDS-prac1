#include "Human.h"
#include <iostream>
using namespace std;


Human::Human(string name){
    user_name=name;
}
char Human::makeMove(){
    
    cout << "Enter move: ";
    cin >> input_move;

    return input_move;

};

string Human::getName(){

    return user_name;
}