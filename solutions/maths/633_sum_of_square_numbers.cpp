// ✅ Problem: Sum of Square Numbers
// 🔗 Link: https://leetcode.com/problems/sum-of-square-numbers/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(sqrt(c))
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two-Pointer

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = sqrt(c);

        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum == c)
                return true;
            else if (sum < c)
                a++;
            else
                b--;
        }

        return false;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
