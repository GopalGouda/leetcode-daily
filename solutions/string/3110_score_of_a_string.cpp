// ✅ Problem: Score of a String
// 🔗 Link: https://leetcode.com/problems/score-of-a-string/description/
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
    int scoreOfString(string s) {
        int score = 0;
        for (int i = 1; i < s.size(); i++) {
            score += abs(s[i] - s[i - 1]);
        }
        return score;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
