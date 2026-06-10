// ✅ Problem: Check if One String Swap Can Make Strings Equal
// 🔗 Link: https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/submissions/2028720226/
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
    bool areAlmostEqual(string s1, string s2) {
        vector<int> diff;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }

        if (diff.size() == 0) return true;
        if (diff.size() != 2) return false;

        int i = diff[0];
        int j = diff[1];

        return s1[i] == s2[j] && s1[j] == s2[i];        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
