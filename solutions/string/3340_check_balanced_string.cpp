// ✅ Problem: Check Balanced String
// 🔗 Link: https://leetcode.com/problems/check-balanced-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int evenSum = 0, oddSum = 0;

        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            if (i % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;
        }

        return evenSum == oddSum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
