// ✅ Problem: Count Binary Substrings
// 🔗 Link: https://leetcode.com/problems/count-binary-substrings/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;
        int curr = 1;
        int ans = 0;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                curr++;
            } else {
                ans += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }

        // Count the last two groups
        ans += min(prev, curr);

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
