// ✅ Problem: Convert Integer to the Sum of Two No-Zero Integers
// 🔗 Link: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n * log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isNoZero(int x) {
        while (x > 0) {
            if (x % 10 == 0)
                return false;
            x /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
                for (int a = 1; a < n; a++) {
            int b = n - a;
            if (isNoZero(a) && isNoZero(b))
                return {a, b};
        }
        return {};
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
