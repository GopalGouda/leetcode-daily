// ✅ Problem: Rearrange Characters to Make Target String
// 🔗 Link: https://leetcode.com/problems/rearrange-characters-to-make-target-string/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> cntS(26, 0), cntT(26, 0);

        for (char c : s)
            cntS[c - 'a']++;

        for (char c : target)
            cntT[c - 'a']++;

        int ans = INT_MAX;

        for (int i = 0; i < 26; i++) {
            if (cntT[i] > 0) {
                ans = min(ans, cntS[i] / cntT[i]);
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
