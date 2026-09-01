// ✅ Problem: 1-bit and 2-bit Characters
// 🔗 Link: https://leetcode.com/problems/1-bit-and-2-bit-characters/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        
        while (i < bits.size() - 1) {
            if (bits[i] == 1)
                i += 2;  // 10 or 11
            else
                i += 1;  // 0
        }
        
        return i == bits.size() - 1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
