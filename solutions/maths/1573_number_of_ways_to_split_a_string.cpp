// ✅ Problem: Number of Ways to Split a String
// 🔗 Link: https://leetcode.com/problems/number-of-ways-to-split-a-string/description/
// 🗂 Topic: maths
// 🕒 Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numWays(string s) {
        const int MOD = 1e9 + 7;
        int n = s.size();
        int ones = 0;

        for (char c : s) {
            if (c == '1') ones++;
        }

        // Case 1: Ones cannot be divided equally
        if (ones % 3 != 0) {
            return 0;
        }

        // Case 2: All characters are zero
        if (ones == 0) {
            long long ans = 1LL * (n - 1) * (n - 2) / 2;
            return ans % MOD;
        }

        // Case 3: Divide the ones into three equal groups
        int k = ones / 3;
        int count = 0;
        long long first = 0, second = 0;

        for (char c : s) {
            if (c == '1') {
                count++;
            } else {
                if (count == k) {
                    first++;
                } else if (count == 2 * k) {
                    second++;
                }
            }
        }

        return ((first + 1) * (second + 1)) % MOD;
    }        
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
