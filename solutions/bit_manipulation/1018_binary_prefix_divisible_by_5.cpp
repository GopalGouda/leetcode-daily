// ✅ Problem: Binary Prefix Divisible By 5
// 🔗 Link: https://leetcode.com/problems/binary-prefix-divisible-by-5/description/?envType=problem-list-v2&envId=bit-manipulation
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
    vector<bool> prefixesDivBy5(vector<int>& nums) {
    vector<bool> ans;
    int curr = 0;  // stores remainder modulo 5

    for (int b : nums) {
        curr = ((curr << 1) + b) % 5;  // shift left and add new bit
        ans.push_back(curr == 0);
    }
    return ans;
}
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
