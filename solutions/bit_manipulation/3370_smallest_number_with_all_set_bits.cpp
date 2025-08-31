// ✅ Problem: Smallest Number With All Set Bits
// 🔗 Link: https://leetcode.com/problems/smallest-number-with-all-set-bits/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        long long k = 1;
        // Keep increasing k until (2^k - 1) >= n
        while ((1LL << k) - 1 < n) {
            k++;
        }
        return (1LL << k) - 1; // 2^k - 1
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
