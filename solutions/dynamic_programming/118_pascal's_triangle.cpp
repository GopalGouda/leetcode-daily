// ✅ Problem: Pascal's Triangle
// 🔗 Link: https://leetcode.com/problems/pascals-triangle/description/
// 🗂 Topic: dynamic_programming
// ⏱ Time Complexity: (n^2)
// 💾 Space Complexity: O(n^2)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1]
                       + triangle[i - 1][j];
            }

            triangle.push_back(row);
        }

        return triangle;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
