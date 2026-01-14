// ✅ Problem: A Number After a Double Reversal
// 🔗 Link: https://leetcode.com/problems/a-number-after-a-double-reversal/description/
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
    bool isSameAfterReversals(int num) {
        return num == 0 || num % 10 != 0;       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
