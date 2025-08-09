// ✅ Problem: Binary Number with Alternating Bits
// 🔗 Link: https://leetcode.com/problems/binary-number-with-alternating-bits/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
       long long x= n^(n>>1);
        return (x & (x+1)) == 0;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
