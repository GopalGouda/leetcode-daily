// ✅ Problem: Permutation Difference between Two Strings
// 🔗 Link: https://leetcode.com/problems/permutation-difference-between-two-strings/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int pos[26] = {0};
        
        // Store index of each character in s
        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - 'a'] = i;
        }
        
        int result = 0;
        
        // Compare positions with t
        for (int i = 0; i < t.size(); i++) {
            result += abs(pos[t[i] - 'a'] - i);
        }
        
        return result;        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
