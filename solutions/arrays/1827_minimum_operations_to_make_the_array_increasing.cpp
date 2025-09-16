// ✅ Problem: Minimum Operations to Make the Array Increasing
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Greedy Approach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
                long long ops = 0;  // count operations
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                ops += (nums[i - 1] + 1 - nums[i]); 
                nums[i] = nums[i - 1] + 1; // update nums[i] to keep array strictly increasing
            }
        }
        return ops;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
