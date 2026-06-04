// ✅ Problem: Nim Game
// 🔗 Link: https://leetcode.com/problems/nim-game/description/
// 🗂 Topic: Game Theory
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
