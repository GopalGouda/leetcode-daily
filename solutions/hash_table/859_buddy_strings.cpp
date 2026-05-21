// ✅ Problem: Buddy Strings
// 🔗 Link: https://leetcode.com/problems/buddy-strings/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // Lengths must be equal
        if (s.size() != goal.size())
            return false;

        // If strings are already equal
        // we need at least one duplicate character
        if (s == goal) {
            vector<int> freq(26, 0);

            for (char c : s) {
                freq[c - 'a']++;

                if (freq[c - 'a'] > 1)
                    return true;
            }

            return false;
        }

        // Store indices where characters differ
        vector<int> diff;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

        // Exactly 2 differences required
        if (diff.size() != 2)
            return false;

        // Check if swapping works
        return s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
