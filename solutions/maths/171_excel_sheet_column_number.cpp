// ✅ Problem: Excel Sheet Column Number
// 🔗 Link: https://leetcode.com/problems/excel-sheet-column-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;

        for (char ch : columnTitle) {
            result = result * 26 + (ch - 'A' + 1);
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
