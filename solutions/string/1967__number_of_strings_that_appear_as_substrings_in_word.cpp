// ✅ Problem:  Number of Strings That Appear as Substrings in Word
// 🔗 Link: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N*M*K)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for (const string& p : patterns) {
            if (word.find(p) != string::npos) ++cnt;
        }
        return cnt;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
