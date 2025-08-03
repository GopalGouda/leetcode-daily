// ✅ Problem: Hamming Distance
// 🔗 Link: https://leetcode.com/problems/hamming-distance/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: find the diff. of X, y using XOR then count 1's

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int XORresult=x^y; //XOR gives 1 wherever bits difference
        int count=0;
        while(XORresult){
            count+=XORresult & 1; //check if last bit is 1, if yes then add in count
            XORresult>>=1; //shift right
        }
        return count;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
