// ✅ Problem: Lucky Numbers in a Matrix
// 🔗 Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(m * n)
// 💾 Space Complexity: O(m + n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> rowMin(m);
        vector<int> colMax(n);
        
        // Step 1: Find row minimums
        for (int i = 0; i < m; i++) {
            rowMin[i] = *min_element(matrix[i].begin(), matrix[i].end());
        }
        
        // Step 2: Find column maximums
        for (int j = 0; j < n; j++) {
            int maxVal = matrix[0][j];
            for (int i = 1; i < m; i++) {
                maxVal = max(maxVal, matrix[i][j]);
            }
            colMax[j] = maxVal;
        }
        
        // Step 3: Find intersection
        vector<int> result;
        for (int i = 0; i < m; i++) {
            if (find(colMax.begin(), colMax.end(), rowMin[i]) != colMax.end()) {
                result.push_back(rowMin[i]);
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
