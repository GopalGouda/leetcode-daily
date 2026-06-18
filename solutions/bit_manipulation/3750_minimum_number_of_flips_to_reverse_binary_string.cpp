// ✅ Problem: Minimum Number of Flips to Reverse Binary String
// 🔗 Link: https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(log n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

class Solution {
public:
    int minimumFlips(int n) {
        string s = bitset<32>(n).to_string();
        
        // Remove leading zeros
        s = s.substr(s.find('1'));
        
        int flips = 0;
        int m = s.size();
        
        for (int i = 0; i < m; i++) {
            if (s[i] != s[m - 1 - i]) {
                flips++;
            }
        }
        
        return flips;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
