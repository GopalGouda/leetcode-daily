// ✅ Problem: Check if Binary String Has at Most One Segment of Ones
// 🔗 Link: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description/
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
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
