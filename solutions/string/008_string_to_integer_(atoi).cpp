// ✅ Problem: String to Integer (atoi)
// 🔗 Link: https://leetcode.com/problems/string-to-integer-atoi/description/
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
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // 2. Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        // 3. Skip leading zeros
        while (i < n && s[i] == '0')
            i++;

        // 4. Convert digits
        long long ans = 0;

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 5. Overflow check
            if (ans > (INT_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return sign * ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
