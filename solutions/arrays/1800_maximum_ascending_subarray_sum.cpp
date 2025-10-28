// ✅ Problem: Maximum Ascending Subarray Sum
// 🔗 Link: https://leetcode.com/problems/maximum-ascending-subarray-sum/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int maxAscendingSum(vector<int>& nums) {
        int ans=nums[0];
        int sum=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]) sum+=nums[i];
            else{
                ans= max(sum, ans);
                sum=nums[i];
            }
        }
        return ans= max(sum, ans);
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
