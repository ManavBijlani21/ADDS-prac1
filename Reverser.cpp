// Including all the C++ library.
#include "Reverser.h"
#include <iostream>
#include <string>
using namespace std;

// Implementation of the reverseDigit function.
int Reverser::reverseDigit(int digit, int reversedDigit) {

  // Encountering the negative value exception.
  if (digit < 0) {
    return -1;

    // Encountering the 0 value exception. 
  } else if (digit == 0) {
    return reversedDigit;

    // Reversing the digits.
  } else {
    reversedDigit = reversedDigit * 10 + (digit % 10);
    return reverseDigit(digit / 10, reversedDigit);
  };
}


// Implementing the reverseString function().
std::string Reverser::reverseString(std::string characters) {
    // Empty string exception
    if (characters.empty()) {
        return "ERROR";
    }

    // Case for implementing recursion
    char firstChar = characters[0];
    std::string stringReversed = reverseString(characters.substr(1));
    return stringReversed + firstChar;
}
