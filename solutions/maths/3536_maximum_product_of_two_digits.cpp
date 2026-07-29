// ✅ Problem: Maximum Product of Two Digits
// 🔗 Link: https://leetcode.com/problems/maximum-product-of-two-digits/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(d) where d is the number of digits in n
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(int n) {
        int first = -1, second = -1;

        while (n > 0) {
            int d = n % 10;
            n /= 10;

            if (d >= first) {
                second = first;
                first = d;
            } else if (d > second) {
                second = d;
            }
        }

        return first * second;        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
