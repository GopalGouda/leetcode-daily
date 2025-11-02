// ✅ Problem: Check If Two String Arrays are Equivalent
// 🔗 Link: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N+M)
// 💾 Space Complexity: O(N+M)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string s1, s2;
        for (auto &w : word1) s1 += w;
        for (auto &w : word2) s2 += w;
        return s1 == s2;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
