// ✅ Problem: Minimum Increment to Make Array Unique
// 🔗 Link: https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int moves = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int newValue = nums[i - 1] + 1;

                moves += newValue - nums[i];
                nums[i] = newValue;
            }
        }

        return moves;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
