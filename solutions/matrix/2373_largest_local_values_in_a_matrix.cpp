// ✅ Problem: Largest Local Values in a Matrix
// 🔗 Link: https://leetcode.com/problems/largest-local-values-in-a-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n = grid.size();
    if (n < 3) return {};
    int m = n - 2;
    vector<vector<int>> result(m, vector<int>(m, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            int mx = INT_MIN;
            for (int di = 0; di < 3; ++di) {
                for (int dj = 0; dj < 3; ++dj) {
                    mx = max(mx, grid[i + di][j + dj]);
                }
            }
            result[i][j] = mx;
        }
    }
    return result;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
