// ✅ Problem: The Two Sneaky Numbers of Digitville
// 🔗 Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            nums[i]+=1;
        }
        for(int i=0; i<nums.size(); ++i){
            int idx= abs(nums[i]);
            if(nums[idx]<0) ans.push_back(idx-1);
            else nums[idx] *= (-1);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
