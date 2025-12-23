// ✅ Problem: Count the Digits That Divide a Number
// 🔗 Link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Extract each digit and check divisibility   

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int original = num;
        int count = 0;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && original % digit == 0) {
                count++;
            }
            num /= 10;
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
