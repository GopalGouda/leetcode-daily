// ✅ Problem: Number of Even and Odd Bits
// 🔗 Link: https://leetcode.com/problems/number-of-even-and-odd-bits/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0;
        int index = 0;
        
        while (n > 0) {
            if (n & 1) { // check if last bit is 1
                if (index % 2 == 0) 
                    even++;
                else 
                    odd++;
            }
            n >>= 1; // shift right
            index++;
        }
        
        return {even, odd};
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
