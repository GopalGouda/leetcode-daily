// ✅ Problem: Concatenate Array With Reverse
// 🔗 Link: https://leetcode.com/problems/concatenate-array-with-reverse/description/
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
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;
        
        for (int i = nums.size() - 1; i >= 0; i--) {
            ans.push_back(nums[i]);
        }
        
        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
