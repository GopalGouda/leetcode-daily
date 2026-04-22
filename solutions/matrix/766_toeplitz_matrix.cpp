// ✅ Problem: Toeplitz Matrix
// 🔗 Link: https://leetcode.com/problems/toeplitz-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(m*n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] != matrix[i - 1][j - 1]) {
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
