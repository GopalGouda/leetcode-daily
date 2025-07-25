// ✅ Problem: Power of Two
// 🔗 Link: https://leetcode.com/problems/power-of-two/description/
// 🗂 Topic: Bit Manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n <= 0) return false;

        // If n is a power of two, it will have exactly one bit set
        // So n & (n - 1) should be 0
        return (n & (n - 1)) == 0;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
