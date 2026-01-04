// ✅ Problem: Harshad Number
// 🔗 Link: https://leetcode.com/problems/harshad-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0, temp = x;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        return (x % sum == 0) ? sum : -1;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
