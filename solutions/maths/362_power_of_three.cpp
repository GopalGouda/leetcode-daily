// ✅ Problem: Power of Three
// 🔗 Link: https://leetcode.com/problems/power-of-three/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(Log3N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return 0;
         while(n%3==0){
            n/=3;
         }
         return n==1;
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
