// ✅ Problem: Trionic Array I
// 🔗 Link: https://leetcode.com/problems/trionic-array-i/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        // 1. Strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1])
            i++;

        // Need at least one increasing step
        if (i == 0)
            return false;

        // 2. Strictly decreasing
        int p = i;
        while (i + 1 < n && nums[i] > nums[i + 1])
            i++;

        // Need at least one decreasing step
        if (i == p || i == n - 1)
            return false;

        // 3. Strictly increasing
        int q = i;
        while (i + 1 < n && nums[i] < nums[i + 1])
            i++;

        // Must consume the entire array
        return i == n - 1 && q < n - 1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
