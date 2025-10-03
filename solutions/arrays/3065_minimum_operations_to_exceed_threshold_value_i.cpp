// ✅ Problem: Minimum Operations to Exceed Threshold Value I
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Count the nos. of elements <k

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        for(int x:nums){
            if(x<k) count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
