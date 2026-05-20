// ✅ Problem: Delete Operation for Two Strings
// 🔗 Link: https://leetcode.com/problems/delete-operation-for-two-strings/description/
// 🗂 Topic: Dynamic_Programming
// ⏱ Time Complexity: O(M*N)
// 💾 Space Complexity: O(M*N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();

        // dp[i][j] = length of LCS of
        // word1[0..i-1] and word2[0..j-1]
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int lcs = dp[m][n];

        // Minimum deletions required
        return m + n - 2 * lcs;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
