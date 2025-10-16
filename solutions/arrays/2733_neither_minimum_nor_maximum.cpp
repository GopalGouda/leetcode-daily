// ✅ Problem: Neither Minimum nor Maximum
// 🔗 Link: https://leetcode.com/problems/neither-minimum-nor-maximum/submissions/1803622682/?envType=problem-list-v2&envId=n8ahh1k5
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
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;

        int max=INT_MIN;
        int min=INT_MAX;
        int ans=-1;
        
        for(int num: nums){
            if(num>max) max=num;
            if(num<min) min=num;
        }
        for(int num: nums){
            if(num != min && num != max) return num;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
