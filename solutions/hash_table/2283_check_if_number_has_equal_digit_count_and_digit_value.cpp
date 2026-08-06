// ✅ Problem: Check if Number Has Equal Digit Count and Digit Value
// 🔗 Link: https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/description/
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
    bool digitCount(string num) {
        vector<int> freq(10, 0);

        // Count frequency of each digit
        for (char ch : num) {
            freq[ch - '0']++;
        }

        // Verify each index
        for (int i = 0; i < num.size(); i++) {
            if (freq[i] != num[i] - '0')
                return false;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
