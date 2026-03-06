// ✅ Problem: Snake in Matrix
// 🔗 Link: https://leetcode.com/problems/snake-in-matrix/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row = 0, col = 0;

        for (string cmd : commands) {
            if (cmd == "UP") {
                row--;
            } 
            else if (cmd == "DOWN") {
                row++;
            } 
            else if (cmd == "LEFT") {
                col--;
            } 
            else if (cmd == "RIGHT") {
                col++;
            }
        }

        return row * n + col;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
