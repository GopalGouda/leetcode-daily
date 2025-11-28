// ✅ Problem: Reverse Words in a String III
// 🔗 Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
// 🗂 Topic: stirng
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;

        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                // reverse the word from [start, i-1]
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1; // move to the next word
            }
        }
        return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
