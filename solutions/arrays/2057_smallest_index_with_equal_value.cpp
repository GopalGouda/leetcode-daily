// ✅ Problem: Smallest Index With Equal Value
// 🔗 Link: https://leetcode.com/problems/smallest-index-with-equal-value/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int smallestEqual(vector<int>& nums) {
        int smallest_indx=INT_MAX;
        bool flag=false;
        for(int i=0; i<nums.size(); i++){
            if((i%10) ==nums[i]){
                smallest_indx= min(smallest_indx,i);
                flag=true;
            }
        }
        if(!flag) smallest_indx=-1;
        return smallest_indx;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
