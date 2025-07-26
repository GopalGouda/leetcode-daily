// ✅ Problem: Divide Two Integers
// 🔗 Link: https://leetcode.com/problems/divide-two-integers/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log (N))
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {

        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Use long to avoid overflow
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long result = 0;

        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            result += multiple;
        }

        // Determine the sign
        if ((dividend < 0) ^ (divisor < 0))
            return -result;
        return result;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
