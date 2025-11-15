// ✅ Problem: Matrix Diagonal Sum
// 🔗 Link: https://leetcode.com/problems/matrix-diagonal-sum/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: Matrix
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += mat[i][i];             // primary diagonal
            sum += mat[i][n - 1 - i];     // secondary diagonal
        }

        // if n is odd, subtract the center once
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
