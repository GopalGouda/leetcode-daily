// ✅ Problem: Password Strength
// 🔗 Link: https://leetcode.com/problems/password-strength/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(k)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int passwordStrength(string password) {
        int strength = 0;
        unordered_set<char> seen(password.begin(), password.end());

        for (char ch : seen) {
            if (ch >= 'a' && ch <= 'z') {
                strength += 1;
            } else if (ch >= 'A' && ch <= 'Z') {
                strength += 2;
            } else if (ch >= '0' && ch <= '9') {
                strength += 3;
            } else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') {
                strength += 5;
            }
        }

        return strength;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
