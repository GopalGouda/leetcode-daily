// ✅ Problem: Check if All A's Appears Before All B's
// 🔗 Link: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/description/
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
    bool checkString(string s) {
        bool seenB = false;

        for (char c : s) {
            if (c == 'b') {
                seenB = true;
            } else if (seenB && c == 'a') {
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
