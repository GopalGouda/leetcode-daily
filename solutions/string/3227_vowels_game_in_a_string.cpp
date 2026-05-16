// ✅ Problem: Vowels Game in a String
// 🔗 Link: https://leetcode.com/problems/vowels-game-in-a-string/description/
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
    bool doesAliceWin(string s) {
        for (char c : s) {
            // If there is at least one vowel,
            // Alice can always win
            if (c == 'a' || c == 'e' || c == 'i' || 
                c == 'o' || c == 'u') {
                return true;
            }
        }

        // No vowels => Alice has no valid move
        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
