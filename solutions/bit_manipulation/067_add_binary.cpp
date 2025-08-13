// ✅ Problem: Add Binary
// 🔗 Link: https://leetcode.com/problems/add-binary/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string res; // will hold result in reverse order

        while (i >= 0 || j >= 0 || carry) {
            int total = carry;

            if (i >= 0) total += a[i--] - '0';
            if (j >= 0) total += b[j--] - '0';

            res.push_back(char((total % 2) + '0')); // append bit
            carry = total / 2;
        }

        reverse(res.begin(), res.end()); // fix the order
        return res;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
