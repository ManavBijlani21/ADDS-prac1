#include "Human.h"
#include <iostream>
using namespace std;


Human::Human(){
    cin >> user_name;

    if (user_name.empty()){
        user_name="Human";
    }
}
char Human::makeMove(){
    
    cout << "Enter move: ";
    cin >> input_move;

    return input_move;

};

string Human::getName(){

    return user_name;
}