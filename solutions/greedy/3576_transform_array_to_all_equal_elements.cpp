// ✅ Problem: Transform Array to All Equal Elements
// 🔗 Link: https://leetcode.com/problems/transform-array-to-all-equal-elements/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
        int minOps(vector<int> nums, int target) {
        int n = nums.size();
        int ops = 0;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != target) {
                nums[i] *= -1;
                nums[i + 1] *= -1;
                ops++;
            }
        }

        // Check if last element matches target
        if (nums[n - 1] != target) return 1e9; // impossible
        return ops;
    }
    bool canMakeEqual(vector<int>& nums, int k) {
                int ops1 = minOps(nums, 1);
        int ops2 = minOps(nums, -1);

        return min(ops1, ops2) <= k;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
