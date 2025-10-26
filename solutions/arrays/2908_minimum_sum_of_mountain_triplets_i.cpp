// ✅ Problem: Minimum Sum of Mountain Triplets I
// 🔗 Link: https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumSum(vector<int>& nums) {
 int n = (int)nums.size();
    if (n < 3) return -1;

    const long long INF = LLONG_MAX / 4;

    // leftMin[j] = minimum of nums[0..j-1]
    vector<long long> leftMin(n, INF);
    long long cur = INF;
    for (int j = 0; j < n; ++j) {
        leftMin[j] = cur;
        cur = min(cur, (long long)nums[j]);
    }

    // rightMin[j] = minimum of nums[j+1..n-1]
    vector<long long> rightMin(n, INF);
    cur = INF;
    for (int j = n - 1; j >= 0; --j) {
        rightMin[j] = cur;
        cur = min(cur, (long long)nums[j]);
    }

    long long ans = INF;
    for (int j = 1; j <= n - 2; ++j) {
        if (leftMin[j] < nums[j] && rightMin[j] < nums[j]) {
            ans = min(ans, leftMin[j] + (long long)nums[j] + rightMin[j]);
        }
    }

    return (ans == INF) ? -1 : ans;
}
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
