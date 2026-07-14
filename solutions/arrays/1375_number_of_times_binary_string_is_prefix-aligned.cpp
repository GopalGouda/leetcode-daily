// ✅ Problem: Number of Times Binary String Is Prefix-Aligned
// 🔗 Link: https://leetcode.com/problems/number-of-times-binary-string-is-prefix-aligned/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int mx = 0, ans = 0;

        for (int i = 0; i < flips.size(); i++) {
            mx = max(mx, flips[i]);
            if (mx == i + 1)
                ans++;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
