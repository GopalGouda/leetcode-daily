// ✅ Problem: base 7
// 🔗 Link: https://leetcode.com/problems/base-7/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(Log7(N))
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string result = "";

        while (num > 0) {
            result = to_string(num % 7) + result;
            num /= 7;
        }

        return isNegative ? "-" + result : result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
