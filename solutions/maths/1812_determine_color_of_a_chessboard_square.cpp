// ✅ Problem: Determine Color of a Chessboard Square
// 🔗 Link: https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int column = coordinates[0] - 'a' + 1;
        int row = coordinates[1] - '0';
        return (column + row) % 2 == 1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
