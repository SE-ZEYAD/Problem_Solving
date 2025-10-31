#include <iostream>
#include "Main.h"

int main() {
    RomanToInteger romanConverter;
    std::string romanNumeral = "MCMXCIV"; // Example Roman numeral
    long integerValue = romanConverter.romanToInt(romanNumeral);
    std::cout << "The integer value of the Roman numeral " << romanNumeral << " is " << integerValue << "\n";   
    


    std::cin.get();
    return 0;
};