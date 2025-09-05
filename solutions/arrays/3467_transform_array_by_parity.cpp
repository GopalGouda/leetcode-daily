// ✅ Problem: Transform Array by Parity
// 🔗 Link: https://leetcode.com/problems/transform-array-by-parity/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two pointer approach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
        nums[i]= (nums[i]%2!=0) ? 1:0;
        }
        int left=0, right=n-1;
        while(left<right){
            while(left<n && nums[left]==0) left++;
            while(right>=0 && nums[right]==1) right--;
            if(left<right){
                swap(nums[left], nums[right]);
            }
        }

        return nums;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
