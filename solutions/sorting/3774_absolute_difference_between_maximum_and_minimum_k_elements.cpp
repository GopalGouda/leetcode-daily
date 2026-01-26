// ✅ Problem: Absolute Difference Between Maximum and Minimum K Elements
// 🔗 Link: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(NLogN)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int minSum=0, maxSum=0;
        int n=nums.size();
        //find the minSum
        for(int i=0; i<k; i++){
            minSum+=nums[i];
        }
        //find the maxSum
        for(int i=n-k; i<n; i++){
            maxSum+=nums[i];
        }
        return abs(maxSum-minSum);
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
