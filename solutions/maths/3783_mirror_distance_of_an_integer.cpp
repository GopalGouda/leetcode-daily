// ✅ Problem: Mirror Distance of an Integer
// 🔗 Link: https://leetcode.com/problems/mirror-distance-of-an-integer/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Reverse the digits of the number and return the absolute difference. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        int original=n;
        int reverse=0;
        while(n>0){
            reverse*=10;
            reverse+=n%10;
            n/=10;
        }
        return abs(original-reverse);
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
