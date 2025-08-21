// ✅ Problem: XOR Operation in an Array
// 🔗 Link: https://leetcode.com/problems/xor-operation-in-an-array/description/?envType=problem-list-v2&envId=bit-manipulation
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
    int xorOperation(int n, int start) {
        int result = 0;
        for(int i=0; i<n; i++){
            result^=(start+2*i);
        }
        return result;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
