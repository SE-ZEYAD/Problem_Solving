#include <unordered_map>
#include "TwoSum.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int current = nums[i];
        int complement = target - current;
        auto it = map.find(complement);
        if (it != map.end()) {
            return { it->second, i };
        }
        map[current] = i;
    }
    return {};
}
