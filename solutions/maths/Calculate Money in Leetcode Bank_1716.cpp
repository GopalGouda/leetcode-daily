// ✅ Problem: 1716
// 🔗 Link: https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;   // complete weeks
        int days = n % 7;    // remaining days
        int total = 0;

        // Money from complete weeks
        for (int w = 0; w < weeks; w++) {
            // Each week starts with (1 + w)
            // Sum of week = (1+w) + (2+w) + ... + (7+w)
            total += 7 * (1 + w) + 21;
        }

        // Money from remaining days
        int start = 1 + weeks; // Monday of the partial week
        for (int d = 0; d < days; d++) {
            total += start + d;
        }

        return total;

    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
