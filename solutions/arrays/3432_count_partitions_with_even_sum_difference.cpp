// ✅ Problem: Count Partitions with Even Sum Difference
// 🔗 Link: https://leetcode.com/problems/count-partitions-with-even-sum-difference/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        return (total % 2 == 0) ? nums.size() - 1 : 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
