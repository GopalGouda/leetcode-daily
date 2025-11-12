// ✅ Problem: Minimum Moves to Equal Array Elements III
// 🔗 Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        if (nums.empty()) return 0;
        int mx = *max_element(nums.begin(), nums.end());
        long long moves = 0;
        for (int x : nums) moves += (mx - x);
        return moves;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
