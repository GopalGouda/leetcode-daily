// ✅ Problem: Decoded String at Index
// 🔗 Link: https://leetcode.com/problems/decoded-string-at-index/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two-Pass Traversal

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size = 0;

        // Step 1: Calculate decoded string length
        for (char c : s) {
            if (isdigit(c)) {
                size *= (c - '0');
            } else {
                size++;
            }
        }

        // Step 2: Traverse backward
        for (int i = s.size() - 1; i >= 0; i--) {

            k %= size;

            if (k == 0 && isalpha(s[i])) {
                return string(1, s[i]);
            }

            if (isdigit(s[i])) {
                size /= (s[i] - '0');
            } else {
                size--;
            }
        }

        return "";
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
