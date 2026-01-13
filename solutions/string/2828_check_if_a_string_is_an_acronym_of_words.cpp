// ✅ Problem: Check if a String Is an Acronym of Words
// 🔗 Link: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (words.size() != s.length())
            return false;

        for (int i = 0; i < words.size(); i++) {
            if (words[i][0] != s[i])
                return false;
        }

        return true;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
