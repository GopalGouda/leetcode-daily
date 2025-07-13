// ✅ Problem: Add Digits
// 🔗 Link: https://leetcode.com/problems/add-digits/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Digital Root

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
       if(num==0) return 0;
       return 1+(num-1)%9;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
