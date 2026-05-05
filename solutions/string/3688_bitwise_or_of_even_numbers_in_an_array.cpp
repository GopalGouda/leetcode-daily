// ✅ Problem: Bitwise OR of Even Numbers in an Array
// 🔗 Link: https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            if (num % 2 == 0) {
                result |= num;
            }
        }
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
