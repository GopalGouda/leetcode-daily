// ✅ Problem: Minimum Moves to Equal Array Elements
// 🔗 Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
         int mn = *min_element(nums.begin(), nums.end());

        int moves = 0;
        for (int num : nums) {
            moves += num - mn;
        }

        return moves;       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
