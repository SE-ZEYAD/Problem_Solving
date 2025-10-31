
#include "RomanToInteger.h"

    int RomanToInteger::symbol(char roman) {
    switch (roman) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
        }
    }

    long  RomanToInteger::romanToInt(const std::string& str) {
        int total = 0;
        for (int i = 0; i < str.size(); i++)
        {
            int current = symbol(str[i]);
            int next = ((i + 1 < str.length())) ? symbol(str[i + 1]) : 0;

            if (current < next)
                total -= current;
            else
                total += current;
        }
        return total;
    }


    