// ✅ Problem: Number of Lines To Write String
// 🔗 Link: https://leetcode.com/problems/number-of-lines-to-write-string/description/
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
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int currentWidth = 0;

        for (char c : s) {
            int w = widths[c - 'a'];
            if (currentWidth + w > 100) {
                lines++;
                currentWidth = w;
            } else {
                currentWidth += w;
            }
        }

        return {lines, currentWidth};        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
