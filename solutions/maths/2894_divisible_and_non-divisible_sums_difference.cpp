// ✅ Problem: Divisible and Non-divisible Sums Difference
// 🔗 Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
    long long k = n / m;
    long long total = n * (n + 1) / 2;
    long long sum_div = m * k * (k + 1) / 2;
    return total - 2 * sum_div;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
