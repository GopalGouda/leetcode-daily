// ✅ Problem: Smallest Even Multiple
// 🔗 Link: https://leetcode.com/problems/smallest-even-multiple/description/
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
    int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : 2 * n; //(condition) ? value_if_true : value_if_false   
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
