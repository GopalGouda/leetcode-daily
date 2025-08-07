// ✅ Problem: Integer Replacement
// 🔗 Link: https://leetcode.com/problems/integer-replacement/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int integerReplacement(int n) {
    long long num = n; // to avoid overflow
    int steps = 0;
    
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            if (num == 3 || num % 4 == 1) {
                num -= 1;
            } else {
                num += 1;
            }
        }
        steps++;
    }
    
    return steps;
}

};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
