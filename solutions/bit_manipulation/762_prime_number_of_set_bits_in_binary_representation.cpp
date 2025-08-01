// ✅ Problem: Prime Number of Set Bits in Binary Representation
// 🔗 Link: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        return n == 2 || n == 3 || n == 5 || n == 7 || 
               n == 11 || n == 13 || n == 17 || n == 19 ||
               n == 23 || n == 29 || n == 31;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for (int i = left; i <= right; ++i) {
            int setBits = __builtin_popcount(i);  // counts 1's in binary
            if (isPrime(setBits)) {
                count++;
            }
        }
        return count;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
