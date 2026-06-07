// ✅ Problem: Determine Whether Matrix Can Be Obtained By Rotation
// 🔗 Link: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(n²)
// 💾 Space Complexity: O(n²)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; i++) {
            if (mat == target) return true;
            rotate(mat);
        }
        return false;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
