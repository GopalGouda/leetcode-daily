// ✅ Problem: Maximum Product of Three Numbers
// 🔗 Link: https://leetcode.com/problems/maximum-product-of-three-numbers/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        return max(
            nums[n - 1] * nums[n - 2] * nums[n - 3],
            nums[0] * nums[1] * nums[n - 1]
        );
    }        
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
