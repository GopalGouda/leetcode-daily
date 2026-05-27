// ✅ Problem: Length of Last Word
// 🔗 Link: https://leetcode.com/problems/length-of-last-word/description/
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
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int length = 0;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count characters of last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
