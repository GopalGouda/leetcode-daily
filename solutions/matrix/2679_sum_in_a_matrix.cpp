// ✅ Problem: Sum in a Matrix
// 🔗 Link: https://leetcode.com/problems/sum-in-a-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(mn log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();

        // Sort each row in ascending order
        for (auto& row : nums) {
            sort(row.begin(), row.end());
        }

        int score = 0;

        // Process columns from right to left
        for (int j = n - 1; j >= 0; j--) {
            int maxVal = 0;

            for (int i = 0; i < m; i++) {
                maxVal = max(maxVal, nums[i][j]);
            }

            score += maxVal;
        }

        return score;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
