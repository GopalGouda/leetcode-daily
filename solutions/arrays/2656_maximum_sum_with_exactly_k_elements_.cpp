// ✅ Problem: Maximum Sum With Exactly K Elements 
// 🔗 Link: https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        long long M = mx;
        long long K = k;
        return K * M + (K * (K - 1)) / 2;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
