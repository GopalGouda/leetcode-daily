// ✅ Problem: Number of 1 Bits
// 🔗 Link: https://leetcode.com/problems/number-of-1-bits/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bitwise AND

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n>0){
            if(n&1) count++;
            n>>=1;
        }
        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
