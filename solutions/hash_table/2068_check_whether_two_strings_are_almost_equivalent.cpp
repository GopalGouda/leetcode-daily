// ✅ Problem: Check Whether Two Strings are Almost Equivalent
// 🔗 Link: https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/description/
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
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        // Count frequencies
        for (char ch : word1) {
            freq1[ch - 'a']++;
        }

        for (char ch : word2) {
            freq2[ch - 'a']++;
        }

        // Compare frequency differences
        for (int i = 0; i < 26; i++) {
            if (abs(freq1[i] - freq2[i]) > 3) {
                return false;
            }
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
