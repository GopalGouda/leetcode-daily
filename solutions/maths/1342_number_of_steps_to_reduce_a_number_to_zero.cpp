// ✅ Problem: Number of Steps to Reduce a Number to Zero
// 🔗 Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: maths
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Basic math

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;
        while(num !=0){
            if(num % 2==0) num/=2;
            else num-=1;
            step++;
        }
        return step;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
