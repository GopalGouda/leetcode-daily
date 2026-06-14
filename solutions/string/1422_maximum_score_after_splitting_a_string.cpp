// ✅ Problem: Maximum Score After Splitting a String
// 🔗 Link: https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int onesRight = 0;

        for (char c : s) {
            if (c == '1') onesRight++;
        }

        int zerosLeft = 0;
        int ans = 0;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') {
                zerosLeft++;
            } else {
                onesRight--;
            }

            ans = max(ans, zerosLeft + onesRight);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
