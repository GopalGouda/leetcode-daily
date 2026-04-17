// ✅ Problem: Find if Digit Game Can Be Won
// 🔗 Link: https://leetcode.com/problems/find-if-digit-game-can-be-won/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
    int singleSum = 0, doubleSum = 0, total = 0;

    for (int num : nums) {
        total += num;

        if (num < 10) {
            singleSum += num;
        } else if (num < 100) {
            doubleSum += num;
        }
    }

    // Case 1: Alice takes single-digit numbers
    if (singleSum > total - singleSum) return true;

    // Case 2: Alice takes double-digit numbers
    if (doubleSum > total - doubleSum) return true;

    return false;       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
