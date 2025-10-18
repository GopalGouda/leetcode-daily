// ✅ Problem: Maximum Difference Between Increasing Elements
// 🔗 Link: https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int maximumDifference(vector<int>& nums) {
        int ans=-1;
        int minVal=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(minVal>nums[i]) minVal=nums[i];
            if(minVal<nums[i]){
                int temp=nums[i]-minVal;
                ans=max(ans, temp);
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
