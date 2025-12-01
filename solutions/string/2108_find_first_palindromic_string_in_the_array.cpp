// ✅ Problem: Find First Palindromic String in the Array
// 🔗 Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N*M) where N is the number of words and M is the average length of the words
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(const string& s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (const string& word : words) {
            if (isPalindrome(word)) {
                return word;
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
