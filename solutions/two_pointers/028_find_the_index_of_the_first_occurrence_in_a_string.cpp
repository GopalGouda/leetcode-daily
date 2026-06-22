// ✅ Problem: Find the Index of the First Occurrence in a String
// 🔗 Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n * m)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two Pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            if (j == m) {
                return i;
            }
        }

        return -1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
