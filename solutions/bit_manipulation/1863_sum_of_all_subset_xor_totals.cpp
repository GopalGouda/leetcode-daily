// ✅ Problem: Sum of All Subset XOR Totals
// 🔗 Link: https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        // Step 1: Compute OR of all numbers
        int total_or = 0;
        for (int num : nums) {
            total_or |= num;
        }
        
        // Step 2: Multiply by 2^(n-1)
        return total_or * (1 << (nums.size() - 1));
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
