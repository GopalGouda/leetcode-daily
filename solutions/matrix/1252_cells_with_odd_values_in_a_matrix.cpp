// ✅ Problem: Cells with Odd Values in a Matrix
// 🔗 Link: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
vector<int> row(m, 0);
        vector<int> col(n, 0);

        // Count increments
        for (auto &idx : indices) {
            row[idx[0]]++;
            col[idx[1]]++;
        }

        // Count how many rows and columns are odd
        int oddRows = 0, oddCols = 0;

        for (int r : row)
            if (r % 2) oddRows++;

        for (int c : col)
            if (c % 2) oddCols++;

        // Apply formula
        return oddRows * (n - oddCols) + (m - oddRows) * oddCols;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
