// ✅ Problem: Reverse Bits
// 🔗 Link: https://leetcode.com/problems/reverse-bits/description/?envType=problem-list-v2&envId=bit-manipulation
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
    int reverseBits(int n) {
        int reverse=0;
        for(int i=0; i<32; i++){
            reverse<<=1; //shift reverse to left to create space to add next bit
            reverse|= n&1; //add last bit of n to reverse
            n>>=1; //now shift n to right to get next bit
        }
        return reverse;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
