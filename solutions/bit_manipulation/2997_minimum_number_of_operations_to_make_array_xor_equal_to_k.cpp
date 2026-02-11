// ✅ Problem: Minimum Number of Operations to Make Array XOR Equal to K
// 🔗 Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
 int currentXor = 0;
        
        // Compute XOR of all elements
        for (int num : nums) {
            currentXor ^= num;
        }
        
        // XOR with k and count differing bits
        return __builtin_popcount(currentXor ^ k);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
