// ✅ Problem: Minimum Moves to Equal Array Elements II
// 🔗 Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n l0g n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int median = nums[nums.size() / 2];
        long long moves = 0;

        for (int num : nums) {
            moves += abs(num - median);
        }

        return moves;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
