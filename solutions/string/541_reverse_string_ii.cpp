// ✅ Problem: Reverse String II
// 🔗 Link: https://leetcode.com/problems/reverse-string-ii/description/
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
    string reverseStr(string s, int k) {
    for (int i = 0; i < s.length(); i += 2 * k) {
        int left = i;
        int right = min(i + k, (int)s.length());
        reverse(s.begin() + left, s.begin() + right);
    }
    return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
