// ✅ Problem: Remove One Element to Make the Array Strictly Increasing
// 🔗 Link: https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/description/
// 🗂 Topic: array
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int removed = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                removed++;

                if (removed > 1)
                    return false;

                // Decide whether to remove nums[i-1] or nums[i]
                if (i > 1 && nums[i] <= nums[i - 2]) {
                    nums[i] = nums[i - 1];
                }
            }
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
