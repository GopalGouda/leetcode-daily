// ✅ Problem: Find the Longest Balanced Substring of a Binary String
// 🔗 Link: https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/description/
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
    int findTheLongestBalancedSubstring(string s) {
        int n = s.size();
        int ans = 0;
        int i = 0;

        while (i < n) {
            int zero = 0, one = 0;

            while (i < n && s[i] == '0') {
                zero++;
                i++;
            }

            while (i < n && s[i] == '1') {
                one++;
                i++;
            }

            ans = max(ans, 2 * min(zero, one));
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
