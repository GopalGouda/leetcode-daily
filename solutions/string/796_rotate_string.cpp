// ✅ Problem: Rotate String
// 🔗 Link: https://leetcode.com/problems/rotate-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: Double the string and check if the goal is a substring

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        string doubled = s + s;

        return doubled.find(goal) != string::npos;
                
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
