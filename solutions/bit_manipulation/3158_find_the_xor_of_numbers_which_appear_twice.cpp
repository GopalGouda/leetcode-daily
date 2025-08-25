// ✅ Problem: Find the XOR of Numbers Which Appear Twice
// 🔗 Link: https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
         sort(nums.begin(), nums.end());   // in-place
        int ans = 0;
        for (int i = 0; i < (int)nums.size(); ) {
            if (i + 1 < (int)nums.size() && nums[i] == nums[i + 1]) {
                ans ^= nums[i];           // appears exactly twice
                i += 2;                   // skip the pair
            } else {
                i += 1;                   // single occurrence
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
