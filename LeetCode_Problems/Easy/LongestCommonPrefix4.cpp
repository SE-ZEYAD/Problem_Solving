#include "LongestCommonPrefix.h"

std::string LongestCommonPrefix::longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";

    std::string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        std::string current = strs[i];

        while (current.find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);

            if (prefix.empty()) return "";
        }
    }

    return prefix;
}