// ✅ Problem: Excel Sheet Column Title
// 🔗 Link: https://leetcode.com/problems/excel-sheet-column-title/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
    string result = "";

    while (columnNumber > 0) {
        columnNumber--;  // adjust for 1-based indexing
        int remainder = columnNumber % 26;
        result = char('A' + remainder) + result;
        columnNumber /= 26;
    }

    return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
