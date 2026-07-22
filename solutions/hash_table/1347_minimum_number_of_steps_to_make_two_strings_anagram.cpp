// ✅ Problem: Minimum Number of Steps to Make Two Strings Anagram
// 🔗 Link: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/
// 🗂 Topic: hsh_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> cnt(26, 0);

        for (char c : s) cnt[c - 'a']++;
        for (char c : t) cnt[c - 'a']--;

        int ans = 0;
        for (int x : cnt)
            if (x > 0) ans += x;

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
