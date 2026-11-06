// ✅ Problem: Binary Digit Score
// 🔗 Link: https://leetcode.com/problems/binary-digit-score/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int binaryDigitScore(int a, int b) {
        int s1 = __builtin_popcount(a);
        int s2 = __builtin_popcount(b);

        if (s1 >= s2) {
            return s1 * s2;
        }

        return s2 / s1;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}