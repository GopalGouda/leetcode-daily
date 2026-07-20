// ✅ Problem: Make String a Subsequence Using Cyclic Increments
// 🔗 Link: https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/description/
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
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;

        while (i < str1.size() && j < str2.size()) {
            char next = (str1[i] == 'z') ? 'a' : str1[i] + 1;

            if (str1[i] == str2[j] || next == str2[j]) {
                j++;
            }
            i++;
        }

        return j == str2.size();        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
