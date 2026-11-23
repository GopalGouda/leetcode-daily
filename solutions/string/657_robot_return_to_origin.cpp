// ✅ Problem: Robot Return to Origin
// 🔗 Link: https://leetcode.com/problems/robot-return-to-origin/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for (char ch : moves) {
            if (ch == 'R') {
                x++;
            }
            else if (ch == 'L') {
                x--;
            }
            else if (ch == 'U') {
                y++;
            }
            else if (ch == 'D') {
                y--;
            }
        }

        return (x == 0 && y == 0);
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
