#pragma once
#include <iostream>
#include <string>
#include <vector>


class Move{

    private:

    std::vector<std::string> defeat_list;


    public:
    virtual std::string getName()=0;
    virtual bool Movelogic(std::string player1_move,std::string player2_move)=0 ;
    
};


class Rock:public Move{

    private:
    std::vector<std::string> defeat_list={"Scissors"};


    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};


class Paper:public Move{

    private:
    std::vector<std::string> defeat_list={"Rock"};

    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;



};

class Scissors:public Move{

    private:
    std::vector<std::string> defeat_list={"Paper"};

    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};

class Robot:public Move{

    private:
    std::vector<std::string> defeat_list={"Ninja","Zombie"};

    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};

class Monkey:public Move{

    private:
    std::vector<std::string> defeat_list={"Ninja","Robot"};


    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};

class Pirate:public Move{

    private:
    std::vector<std::string> defeat_list={"Robot","Monkey"};

    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};

class Ninja:public Move{

    private:
    std::vector<std::string> defeat_list={"Pirate","Zombie"};

    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};

class Zombie:public Move{

    private:
    std::vector<std::string> defeat_list={"Pirate","Monkey"};

    public:
    std::string getName() override;
    bool Movelogic(std::string player1_move,std::string player2_move) override;


};









