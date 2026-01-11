// ✅ Problem: Sum of Digits in Base K
// 🔗 Link: https://leetcode.com/problems/sum-of-digits-in-base-k/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(logK(n))
// 💾 Space Complexity: O(1)
// 🧠 Approach: Convert the number to base k and sum all digits

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        while (n > 0) {
            sum += n % k;
            n /= k;
        }
        return sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
