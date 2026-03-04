// ✅ Problem: Ugly Number
// 🔗 Link: https://leetcode.com/problems/ugly-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(LogN)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        while (n % 2 == 0) {
            n /= 2;
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        while (n % 5 == 0) {
            n /= 5;
        }

        return n == 1;     
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
