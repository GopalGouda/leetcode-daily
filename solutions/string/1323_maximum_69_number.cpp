// ✅ Problem: Maximum 69 Number
// 🔗 Link: https://leetcode.com/problems/maximum-69-number/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Convert the number to a string, iterate through each character, and replace the first '6' with '9' to maximize the value.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (char &c : s) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(s);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
