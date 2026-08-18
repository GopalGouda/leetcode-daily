// ✅ Problem: Check if Bitwise OR Has Trailing Zeros
// 🔗 Link: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int evenCount = 0;

        for (int x : nums) {
            if (x % 2 == 0) {
                evenCount++;
            }

            if (evenCount >= 2) {
                return true;
            }
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
