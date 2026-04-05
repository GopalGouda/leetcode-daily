// ✅ Problem: Remove Outermost Parentheses
// 🔗 Link: https://leetcode.com/problems/remove-outermost-parentheses/description/
// 🗂 Topic: stack
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (depth > 0) {
                    result += ch;
                }
                depth++;
            } else { // ch == ')'
                depth--;
                if (depth > 0) {
                    result += ch;
                }
            }
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
