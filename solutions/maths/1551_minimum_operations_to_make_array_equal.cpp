// ✅ Problem: Minimum Operations to Make Array Equal
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-make-array-equal/description/
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
    int minOperations(int n) {
        int left = n / 2;
        int right = (n + 1) / 2;
        return left * right;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
