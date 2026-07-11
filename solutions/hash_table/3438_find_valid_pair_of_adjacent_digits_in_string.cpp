// ✅ Problem: Find Valid Pair of Adjacent Digits in String
// 🔗 Link: https://leetcode.com/problems/find-valid-pair-of-adjacent-digits-in-string/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string findValidPair(string s) {
        vector<int> freq(10, 0);

        // Count frequency of each digit
        for (char c : s)
            freq[c - '0']++;

        // Check adjacent pairs
        for (int i = 0; i + 1 < s.size(); i++) {
            int a = s[i] - '0';
            int b = s[i + 1] - '0';

            if (a != b && freq[a] == a && freq[b] == b)
                return s.substr(i, 2);
        }

        return "";        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
