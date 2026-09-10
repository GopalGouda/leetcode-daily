// ✅ Problem: Find Target Indices After Sorting Array
// 🔗 Link: https://leetcode.com/problems/find-target-indices-after-sorting-array/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
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
