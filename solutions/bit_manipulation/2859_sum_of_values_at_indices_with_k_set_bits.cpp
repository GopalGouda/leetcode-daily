// ✅ Problem: Sum of Values at Indices With K Set Bits
// 🔗 Link: https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (__builtin_popcount(i) == k) {
                sum += nums[i];
            }
        }
        return sum;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
