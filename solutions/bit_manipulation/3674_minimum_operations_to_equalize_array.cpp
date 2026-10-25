// ✅ Problem: Minimum Operations to Equalize Array
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-equalize-array/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[0]) {
                return 1;
            }
        }
        return 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
