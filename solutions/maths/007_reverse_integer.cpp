// ✅ Problem: Reverse Integer
// 🔗 Link: https://leetcode.com/problems/reverse-integer/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(Log(X))
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Overflow check
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
