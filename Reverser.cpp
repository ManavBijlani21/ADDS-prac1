// Including all the C++ library.
#include "Reverser.h"
#include <iostream>
#include <string>
using namespace std;

// Getting the integer function reverseDigit from REverser class to reverse the input digits.
int Reverser::reverseDigit(int digit, int reversedDigit) {

  // Returning the vakue -1 if the digit is less than 0.
  if (digit < 0) {
    return -1;

    // Returing the reversedValue if the value is equal to 0.
  } else if (digit == 0) {
    return reversedDigit;

    // Reversing the digits in either case.
  } else {
    reversedDigit = reversedDigit * 10 + (digit % 10);
    return reverseDigit(digit / 10, reversedDigit);
  };
}


// Creating the function reverseString from the class Reverse.
std::string Reverser::reverseString(std::string characters) {
    // Base case: when the string is empty
    if (characters.empty()) {
        return "ERROR";
    }

    // Recursive case: reversing the stirng and appending the last reversed word to the revesed stirng
    char firstChar = characters[0];
    std::string stringReversed = reverseString(characters.substr(1));
    return stringReversed + firstChar;
}
