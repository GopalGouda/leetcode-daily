// ✅ Problem: Is Subsequence
// 🔗 Link: https://leetcode.com/problems/is-subsequence/description/
// 🗂 Topic: two pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.length();   
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
