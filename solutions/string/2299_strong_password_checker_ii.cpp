// ✅ Problem: Strong Password Checker II
// 🔗 Link: https://leetcode.com/problems/strong-password-checker-ii/description/
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
    bool strongPasswordCheckerII(string password) {
        if (password.length() < 8) return false;

        string special = "!@#$%^&*()-+";

        bool hasLower = false;
        bool hasUpper = false;
        bool hasDigit = false;
        bool hasSpecial = false;

        for (int i = 0; i < password.length(); i++) {
            if (i > 0 && password[i] == password[i - 1])
                return false;

            if (islower(password[i]))
                hasLower = true;
            else if (isupper(password[i]))
                hasUpper = true;
            else if (isdigit(password[i]))
                hasDigit = true;

            if (special.find(password[i]) != string::npos)
                hasSpecial = true;
        }

        return hasLower && hasUpper && hasDigit && hasSpecial;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
