#pragma once
#include <iostream>
#include <string>
#include <vector>


class Move{

    protected:
    std::vector<std::string> defeat;


    public:
    std::string getName();

};


class Rock:public Move{


};


class Paper:public Move{


};

class Scissors:public Move{


};

class Robot:public Move{


};

class Monkey:public Move{


};

class Pirate:public Move{


};

class Ninja:public Move{


};

class Zombie:public Move{


};









