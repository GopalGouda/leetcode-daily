// ✅ Problem: Check Good Integer
// 🔗 Link: https://leetcode.com/problems/check-good-integer/description/
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
    // Your code here
};

class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;

        while (n > 0) {
            int digit = n % 10;
            digitSum += digit;
            squareSum += digit * digit;
            n /= 10;
        }

        return squareSum - digitSum >= 50;        
    }
};
