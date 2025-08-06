// ✅ Problem: Sum of Two Integers
// 🔗 Link: https://leetcode.com/problems/sum-of-two-integers/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            unsigned carry= (unsigned)(a&b)<<1;
            a=a^b;
            b=carry;

        }
        return a;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
