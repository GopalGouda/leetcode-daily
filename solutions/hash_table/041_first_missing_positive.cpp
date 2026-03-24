// ✅ Problem: First Missing Positive
// 🔗 Link: https://leetcode.com/problems/first-missing-positive/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        // place nums[i] in its correct position if possible
        while (nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            int correctIdx = nums[i] - 1;
            swap(nums[i], nums[correctIdx]);
        }
    }

    // find first missing positive
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
