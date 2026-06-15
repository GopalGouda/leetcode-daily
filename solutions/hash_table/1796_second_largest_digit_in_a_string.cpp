// ✅ Problem: Second Largest Digit in a String
// 🔗 Link: https://leetcode.com/problems/second-largest-digit-in-a-string/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int first = -1, second = -1;

        for (char ch : s) {
            if (isdigit(ch)) {
                int d = ch - '0';

                if (d > first) {
                    second = first;
                    first = d;
                }
                else if (d < first && d > second) {
                    second = d;
                }
            }
        }

        return second;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
