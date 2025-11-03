// ✅ Problem: Longest Continuous Increasing Subsequence
// 🔗 Link: https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int maxLen = 1;
        int currLen = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                currLen++;
                maxLen = max(maxLen, currLen);
            } else {
                currLen = 1;
            }
        }

        return maxLen; 
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
