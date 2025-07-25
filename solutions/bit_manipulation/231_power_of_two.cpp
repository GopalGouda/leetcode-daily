// ✅ Problem: Power of Two
// 🔗 Link: https://leetcode.com/problems/power-of-two/description/
// 🗂 Topic: Bit Manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation (best approch)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) { //Bit manipulation method

        if (n <= 0) return false;

        // If n is a power of two, it will have exactly one bit set
        // So n & (n - 1) should be 0
        return (n & (n - 1)) == 0;
    }
    bool isPowerOfTwo(int n) {  //Recursion Method
        if (n == 1) return true;
        if (n <= 0 || n % 2 != 0) return false;
        return isPowerOfTwo(n / 2);
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
