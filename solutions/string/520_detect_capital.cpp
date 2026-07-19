// ✅ Problem: Detect Capital
// 🔗 Link: https://leetcode.com/problems/detect-capital/description/
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
    bool detectCapitalUse(string word) {
        bool allUpper = true;
        bool allLower = true;
        bool firstUpper = isupper(word[0]);

        for (int i = 0; i < word.size(); i++) {
            if (!isupper(word[i]))
                allUpper = false;
            if (!islower(word[i]))
                allLower = false;
        }

        if (allUpper || allLower)
            return true;

        if (firstUpper) {
            for (int i = 1; i < word.size(); i++) {
                if (!islower(word[i]))
                    return false;
            }
            return true;
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
