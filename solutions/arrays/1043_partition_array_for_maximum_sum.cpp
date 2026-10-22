// ✅ Problem: Partition Array for Maximum Sum
// 🔗 Link: https://leetcode.com/problems/partition-array-for-maximum-sum/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n * k)
// 💾 Space Complexity: O(n)
// 🧠 Approach: Dynamic Programming

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            int maxVal = 0;

            for (int len = 1; len <= k && len <= i; len++) {
                maxVal = max(maxVal, arr[i - len]);

                dp[i] = max(dp[i],
                            dp[i - len] + maxVal * len);
            }
        }

        return dp[n];        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
