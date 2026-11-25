// ✅ Problem: Minimum Flips to Make Binary String Coherent
// 🔗 Link: https://leetcode.com/problems/minimum-flips-to-make-binary-string-coherent/description/
// 🗂 Topic: 
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        if (n <= 2) return 0;

        int ones = 0;
        for (char c : s) ones += (c == '1');
        int zeros = n - ones;

        int best = zeros;
        best = min(best, max(0, ones - 1));

        int interiorOnes = ones - (s[0] == '1') - (s[n - 1] == '1');
        int ends = (s[0] == '0') + (s[n - 1] == '0');
        best = min(best, interiorOnes + ends);

        return best;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
