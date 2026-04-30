// ✅ Problem: Special Positions in a Binary Matrix
// 🔗 Link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(m*n)
// 💾 Space Complexity: O(m+n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
int m = mat.size();
    int n = mat[0].size();
    
    vector<int> rowCount(m, 0);
    vector<int> colCount(n, 0);
    
    // Count 1s in rows and columns
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }
    
    // Count special positions
    int special = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1) {
                special++;
            }
        }
    }
    
    return special;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
