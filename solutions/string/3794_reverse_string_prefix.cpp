// ✅ Problem: Reverse String Prefix
// 🔗 Link: https://leetcode.com/problems/reverse-string-prefix/description/
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
    string reversePrefix(string s, int k) {
        reverse(s.begin(), s.begin() + k);
        return s;
    }        
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
