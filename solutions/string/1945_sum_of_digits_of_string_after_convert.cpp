// ✅ Problem: Sum of Digits of String After Convert
// 🔗 Link: https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n+k)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
     int sum = 0;

        // First conversion + first transform
        for (char c : s) {
            int val = c - 'a' + 1;
            sum += val / 10 + val % 10;
        }

        // Remaining k-1 transforms
        while (--k) {
            int newSum = 0;
            while (sum > 0) {
                newSum += sum % 10;
                sum /= 10;
            }
            sum = newSum;
        }

        return sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
