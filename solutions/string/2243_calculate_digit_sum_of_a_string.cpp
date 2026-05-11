// ✅ Problem: Calculate Digit Sum of a String
// 🔗 Link: https://leetcode.com/problems/calculate-digit-sum-of-a-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string temp = "";

            for (int i = 0; i < s.length(); i += k) {
                int sum = 0;

                // Calculate sum of current group
                for (int j = i; j < min(i + k, (int)s.length()); j++) {
                    sum += s[j] - '0';
                }

                // Append sum as string
                temp += to_string(sum);
            }

            s = temp;
        }

        return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
