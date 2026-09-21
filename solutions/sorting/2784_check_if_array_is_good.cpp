// ✅ Problem: Check if Array is Good
// 🔗 Link: https://leetcode.com/problems/check-if-array-is-good/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size() - 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1)
                return false;
        }

        return nums[n] == n;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
