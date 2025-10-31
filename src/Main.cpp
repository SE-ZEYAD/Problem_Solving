#include <iostream>
#include "Main.h"

int main() {
    LongestCommonPrefix lcp;
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::string prefix = lcp.longestCommonPrefix(strs);
    std::cout << "Longest Common Prefix: " << prefix << "\n";
    

    std::cin.get();
    return 0;
};