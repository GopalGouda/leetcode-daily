// ✅ Problem: Backspace String Compare
// 🔗 Link: https://leetcode.com/problems/backspace-string-compare/description/
// 🗂 Topic: stack
// ⏱ Time Complexity: O(n+m
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
int i = s.length() - 1;
        int j = t.length() - 1;

        while (i >= 0 || j >= 0) {

            int skipS = 0;
            int skipT = 0;

            // Find valid character in s
            while (i >= 0) {
                if (s[i] == '#') {
                    skipS++;
                    i--;
                }
                else if (skipS > 0) {
                    skipS--;
                    i--;
                }
                else {
                    break;
                }
            }

            // Find valid character in t
            while (j >= 0) {
                if (t[j] == '#') {
                    skipT++;
                    j--;
                }
                else if (skipT > 0) {
                    skipT--;
                    j--;
                }
                else {
                    break;
                }
            }

            // Compare valid characters
            if (i >= 0 && j >= 0) {
                if (s[i] != t[j]) {
                    return false;
                }
            }
            else if (i >= 0 || j >= 0) {
                return false;
            }

            i--;
            j--;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
