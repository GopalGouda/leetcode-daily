// ✅ Problem: Check if Number is a Sum of Powers of Three
// 🔗 Link: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(Log3(N))
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 == 2) {
                return false;
            }
            n /= 3;
        }
        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
