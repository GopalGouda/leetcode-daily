// ✅ Problem: Count the Number of Consistent Strings
// 🔗 Link: https://leetcode.com/problems/count-the-number-of-consistent-strings/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(n * m), where n is the number of words and m is the average length of the words
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> allowedChar(26, false);

        for (char ch : allowed)
            allowedChar[ch - 'a'] = true;

        int count = 0;

        for (string &word : words) {
            bool ok = true;
            for (char ch : word) {
                if (!allowedChar[ch - 'a']) {
                    ok = false;
                    break;
                }
            }
            if (ok) count++;
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
