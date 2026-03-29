// ✅ Problem: Minimum Sum of Four Digit Number After Splitting Digits
// 🔗 Link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        
        // Extract digits
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // Sort digits
        sort(digits.begin(), digits.end());
        
        // Form two numbers
        int new1 = digits[0] * 10 + digits[2];
        int new2 = digits[1] * 10 + digits[3];
        
        return new1 + new2;        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
