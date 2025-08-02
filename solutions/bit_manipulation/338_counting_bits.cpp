// ✅ Problem: Counting Bits
// 🔗 Link: https://leetcode.com/problems/counting-bits/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manupulation
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: bitwise operation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1, 0);
        
        for (int i = 1; i <= n; ++i) {
            bits[i] = bits[i >> 1] + (i & 1);
        }
        
        return bits;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
