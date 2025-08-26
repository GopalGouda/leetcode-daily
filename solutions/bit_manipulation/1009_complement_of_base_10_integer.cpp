// ✅ Problem: Complement of Base 10 Integer
// 🔗 Link: https://leetcode.com/problems/complement-of-base-10-integer/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;  // special case: complement of 0 is 1

        int mask = 0;
        int temp = n;

        // build mask with 1s for all bits in n
        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }

        return n ^ mask;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
