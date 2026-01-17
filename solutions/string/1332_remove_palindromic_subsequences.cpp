// ✅ Problem: Remove Palindromic Subsequences
// 🔗 Link: https://leetcode.com/problems/remove-palindromic-subsequences/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.empty())
            return 0;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (s == rev)
            return 1;

        return 2;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
