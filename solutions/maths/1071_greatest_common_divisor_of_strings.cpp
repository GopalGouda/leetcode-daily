// ✅ Problem: Greatest Common Divisor of Strings
// 🔗 Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n+m)
// 💾 Space Complexity: O(n+m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If no common divisor string exists
        if (str1 + str2 != str2 + str1)
            return "";
        
        // Find gcd of lengths
        int len = gcd(str1.size(), str2.size());
        
        // Return the common prefix
        return str1.substr(0, len);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
