// ✅ Problem: Fibonacci Number
// 🔗 Link: https://leetcode.com/problems/fibonacci-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: I solved it using Bottom-Up Iterative Dynamic Programming 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int first=0, second=1, sum=0;
        for(int i=2; i<=n; i++){
            sum=first+second;
            first=second;
            second=sum;
        }
        return sum;
    }
};

int main() {
    Solution sol;
    int n=4;
    int result=sol.fib(n);
    cout<<result<<endl;
    return 0;
}
