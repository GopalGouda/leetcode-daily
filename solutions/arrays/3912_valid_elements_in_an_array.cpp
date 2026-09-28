// ✅ Problem: Valid Elements in an Array
// 🔗 Link: https://leetcode.com/problems/valid-elements-in-an-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();

        vector<bool> leftValid(n, false);
        vector<bool> rightValid(n, false);

        // Greater than every element on the left
        int maxLeft = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxLeft) {
                leftValid[i] = true;
            }
            maxLeft = max(maxLeft, nums[i]);
        }

        // Greater than every element on the right
        int maxRight = INT_MIN;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > maxRight) {
                rightValid[i] = true;
            }
            maxRight = max(maxRight, nums[i]);
        }

        // Collect valid elements in original order
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (leftValid[i] || rightValid[i]) {
                ans.push_back(nums[i]);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
