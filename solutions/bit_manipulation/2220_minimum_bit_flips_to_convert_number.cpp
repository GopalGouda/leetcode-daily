// ✅ Problem: Minimum Bit Flips to Convert Number
// 🔗 Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x= start ^ goal;
        int count=0;
        while (x > 0) {
            // Check the last bit
            count += (x & 1);
            // Shift right
            x >>= 1;
        }
        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
