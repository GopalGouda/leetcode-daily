// ✅ Problem: Number Complement
// 🔗 Link: https://leetcode.com/problems/number-complement/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit manipulation
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        // Step 1: Create mask with all 1's of same length as num
        unsigned mask = 0;
        unsigned temp = num;
        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }
        
        // Step 2: XOR to flip bits within mask
        return num ^ mask;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
