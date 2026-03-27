// ✅ Problem: Split a String in Balanced Strings
// 🔗 Link: Split a String in Balanced Strings
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
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;

        for (char ch : s) {
            if (ch == 'L') {
                balance++;
            } else {
                balance--;
            }

            if (balance == 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
