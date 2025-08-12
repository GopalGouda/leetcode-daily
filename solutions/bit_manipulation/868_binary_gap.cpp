// ✅ Problem: Binary Gap
// 🔗 Link: https://leetcode.com/problems/binary-gap/description/?envType=problem-list-v2&envId=bit-manipulation
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
    int binaryGap(int n) {
        int lastPos = -1;       // position of last seen '1'
        int maxDist = 0;        // max distance found
        int pos = 0;            // current bit position
        
        while (n > 0) {
            if (n & 1) {        // check if current bit is '1'
                if (lastPos != -1) {
                    maxDist = max(maxDist, pos - lastPos);
                }
                lastPos = pos;  // update last seen '1'
            }
            n >>= 1;            // shift to next bit
            pos++;              // move to next bit position
        }
        
        return maxDist;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
