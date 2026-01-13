// ✅ Problem: Count Asterisks
// 🔗 Link: https://leetcode.com/problems/count-asterisks/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insideBars = false;

        for (char c : s) {
            if (c == '|') {
                insideBars = !insideBars;  // toggle state
            } else if (c == '*' && !insideBars) {
                count++;
            }
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
