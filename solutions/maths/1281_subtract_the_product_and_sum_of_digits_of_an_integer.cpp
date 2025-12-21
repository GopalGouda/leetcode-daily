// ✅ Problem: Subtract the Product and Sum of Digits of an Integer
// 🔗 Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Extract each digit using modulo and division operations, compute product and sum separately, then return their difference.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
