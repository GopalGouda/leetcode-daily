// ✅ Problem: Smallest Index With Digit Sum Equal to Index
// 🔗 Link: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N*K)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int x=abs(nums[i]);
            int sum=0;
            while(x>0){
                sum+=x%10;
                x/=10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
