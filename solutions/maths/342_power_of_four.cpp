// ✅ Problem: Power of Four
// 🔗 Link: https://leetcode.com/problems/power-of-four/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: maths
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: basic maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0) return false;
        while(n%4==0){  // checks if n is divisible by 4.
            n/=4; //we divide n by 4 and continue. If n is a power of 4, then n will become 1
        }
        return n==1; // return true only if n has become 1.
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
