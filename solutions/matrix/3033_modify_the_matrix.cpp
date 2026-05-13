// ✅ Problem: Modify the Matrix
// 🔗 Link: https://leetcode.com/problems/modify-the-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(m*n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Find maximum element in each column
        vector<int> colMax(n, INT_MIN);

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                colMax[j] = max(colMax[j], matrix[i][j]);
            }
        }

        // Replace -1 with column maximum
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = colMax[j];
                }
            }
        }

        return matrix;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
