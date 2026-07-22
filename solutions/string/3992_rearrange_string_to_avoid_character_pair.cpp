// ✅ Problem: Rearrange String to Avoid Character Pair
// 🔗 Link: https://leetcode.com/problems/rearrange-string-to-avoid-character-pair/description/
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
    string rearrangeString(string s, char x, char y) {
        vector<int> cnt(26, 0);
        for (char c : s) cnt[c - 'a']++;

        string ans;

        // Put all other characters first.
        for (char c = 'a'; c <= 'z'; c++) {
            if (c == x || c == y) continue;
            ans.append(cnt[c - 'a'], c);
        }

        // Then all y's.
        ans.append(cnt[y - 'a'], y);

        // Finally all x's.
        ans.append(cnt[x - 'a'], x);

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
