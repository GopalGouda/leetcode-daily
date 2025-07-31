// ✅ Problem: Climbing Stairs
// 🔗 Link: https://leetcode.com/problems/climbing-stairs/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int a=1; //way to climb step 1
        int b=2; //way to climb step 2
        int total; //Total way to climb
        //way to climb step 3 and others
        for(int i=3; i<=n; i++){
            total= a+b; //total ways to reach current step
            a=b;
            b=total;
        }
        return total;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
