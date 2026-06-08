// ✅ Problem: Check If It Is a Straight Line
// 🔗 Link: https://leetcode.com/problems/check-if-it-is-a-straight-line/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];

        for (int i = 2; i < coordinates.size(); i++) {
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            if ((long long)(y - y0) * (x1 - x0) !=
                (long long)(y1 - y0) * (x - x0)) {
                return false;
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
