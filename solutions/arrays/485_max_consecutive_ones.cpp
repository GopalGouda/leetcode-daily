// ✅ Problem: Max Consecutive Ones
// 🔗 Link: https://leetcode.com/problems/max-consecutive-ones/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) count++;
            else {
                ans= max(count, ans);
                count=0;
            }
        }
        ans= max(count, ans);
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
