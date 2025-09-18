// ✅ Problem: Running Sum of 1d Array
// 🔗 Link: https://leetcode.com/problems/running-sum-of-1d-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: basic maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
