// ✅ Problem: Array Partition
// 🔗 Link: https://leetcode.com/problems/array-partition/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(NlogN)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }

        return sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
