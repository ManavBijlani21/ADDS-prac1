#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {
public:
    int reverseDigit(int digit, int reversedDigit = 0);
    std::string reverseString(std::string characters);
};

#endif
