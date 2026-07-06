// ✅ Problem: Perfect Number
// 🔗 Link: https://leetcode.com/problems/perfect-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(√n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Find all divisors up to √n and sum them.    

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;

        int sum = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i != num / i)
                    sum += num / i;
            }
        }

        return sum == num;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
