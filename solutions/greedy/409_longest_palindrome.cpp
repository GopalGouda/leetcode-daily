// ✅ Problem: Longest Palindrome
// 🔗 Link: https://leetcode.com/problems/longest-palindrome/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        // Calculate palindrome length
        for (int count : freq) {
            length += (count / 2) * 2;

            if (count % 2 == 1) {
                hasOdd = true;
            }
        }

        // Add one character in the middle
        if (hasOdd) {
            length++;
        }

        return length;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
