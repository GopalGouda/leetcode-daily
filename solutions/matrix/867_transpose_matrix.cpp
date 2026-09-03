// ✅ Problem: Transpose Matrix
// 🔗 Link: https://leetcode.com/problems/transpose-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(m*n)
// 💾 Space Complexity: O(m*n)
// 🧠 Approach:
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> result(cols, vector<int>(rows));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = matrix[i][j];
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
