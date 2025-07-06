// ✅ Problem: Palindrome Number
// 🔗 Link: https://leetcode.com/problems/palindrome-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(log₁₀x)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Just Reverse the number and check if the generate number equals to the original number

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long y=0;
        if(x<0) return false;
        while(x>0){
            y*=10;
            y+=x%10;
            x/=10;
        }
        return temp==y;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
