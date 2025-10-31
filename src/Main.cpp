#include <iostream>
#include "Main.h"

int main() {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> res = sol.twoSum(nums, target);
    if (!res.empty()) {
        std::cout << "indices: " << res[0] << ", " << res[1] << "\n";
    } else {
        std::cout << "No solution found\n";
    }
    
    std::cin.get();
    return 0;
};