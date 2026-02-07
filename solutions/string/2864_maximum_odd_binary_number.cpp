// ✅ Problem: Maximum Odd Binary Number
// 🔗 Link: https://leetcode.com/problems/maximum-odd-binary-number/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
         int ones = 0, zeros = 0;
        
        for (char c : s) {
            if (c == '1') ones++;
            else zeros++;
        }
        
        // One '1' at the end to make it odd
        return string(ones - 1, '1') + string(zeros, '0') + '1';
           
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
