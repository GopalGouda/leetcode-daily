// ✅ Problem: Number of Matching Subsequences
// 🔗 Link: https://leetcode.com/problems/number-of-matching-subsequences/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: (n + m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<int> pos[26];

        // Store positions of each character.
        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - 'a'].push_back(i);
        }

        int ans = 0;

        for (const string& word : words) {
            int prev = -1;
            bool ok = true;

            for (char c : word) {
                auto& v = pos[c - 'a'];

                // Find first position > prev.
                auto it = upper_bound(v.begin(), v.end(), prev);

                if (it == v.end()) {
                    ok = false;
                    break;
                }

                prev = *it;
            }

            if (ok) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
