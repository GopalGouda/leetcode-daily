// ✅ Problem: Sum of Square Numbers
// 🔗 Link: https://leetcode.com/problems/sum-of-square-numbers/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(sqrt(c))
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two-Pointer

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=0; //start with smallest posible value
        long long b= sqrt(c); //because b^2 > c would be invalid
        long long sum;
        while(a<=b){
            sum=a*a + b*b;
            if(sum==c) return true; 
            else if(sum<c) a++;
            else b--;
        }
        return false; //if no result found
    }
};


int main() {
    Solution sol;
    int c=41;
    cout<<"Result is: "<<sol.judgeSquareSum(c);
    return 0;
}
