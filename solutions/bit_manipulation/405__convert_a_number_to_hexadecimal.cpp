// ✅ Problem:  Convert a Number to Hexadecimal
// 🔗 Link: https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string hexMap = "0123456789abcdef";
        string res = "";

        unsigned int n = (unsigned int) num; // handle negative using 2's complement

        while (n > 0) {
            int digit = n & 0xf;             // last 4 bits
            res.push_back(hexMap[digit]);    // map to hex char
            n >>= 4;                          // shift right by 4 bits
        }

        reverse(res.begin(), res.end());     // fix order
        return res;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
