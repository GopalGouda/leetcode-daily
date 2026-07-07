// ✅ Problem: Minimum Moves to Convert String
// 🔗 Link: Minimum Moves to Convert String
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
    int minimumMoves(string s) {
        int moves = 0;
        int i = 0;
        
        while (i < s.size()) {
            if (s[i] == 'X') {
                moves++;
                i += 3;      // This move covers i, i+1, i+2
            } else {
                i++;
            }
        }
        
        return moves;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
