// ✅ Problem: Check if Matrix Is X-Matrix
// 🔗 Link: https://leetcode.com/problems/check-if-matrix-is-x-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(n^2)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                // Cell is on one of the diagonals
                if (i == j || i + j == n - 1) {
                    if (grid[i][j] == 0)
                        return false;
                }
                // Non-diagonal cells must be 0
                else {
                    if (grid[i][j] != 0)
                        return false;
                }
            }
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
