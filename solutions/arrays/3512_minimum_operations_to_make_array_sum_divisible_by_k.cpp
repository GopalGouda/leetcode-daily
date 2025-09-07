// ✅ Problem: Minimum Operations to Make Array Sum Divisible by K
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: ans= sum % k; //remainder tells number of steps required

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];  //Calculate the total sum
        }
        int ans= sum % k; //remainder tells number of steps required
        return ans; 
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
