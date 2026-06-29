// ✅ Problem: Check If String Is a Prefix of Array
// 🔗 Link: https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int i = 0;

        for (string &word : words) {
            for (char c : word) {
                if (i >= s.size() || s[i] != c)
                    return false;
                i++;
            }
            if (i == s.size())
                return true;
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
