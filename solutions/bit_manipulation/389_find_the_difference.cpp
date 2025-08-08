// ✅ Problem: Find the Difference
// 🔗 Link: https://leetcode.com/problems/find-the-difference/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result =0;
        //XOR all characters in s and t
        for(char c:s) result ^=c;
        for(char c:t) result ^=c;
        
        return result;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
