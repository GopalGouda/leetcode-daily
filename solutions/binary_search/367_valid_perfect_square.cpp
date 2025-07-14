// ✅ Problem: Valid Perfect Square
// 🔗 Link: https://leetcode.com/problems/valid-perfect-square/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search
// 📝 Note: This question can be also solved by using Newton-Raphson i.e x = x + ( num / x) / 2

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<1) return false;
         long long low=1, high=num, mid, square;
         while(low<=high){
            mid=low+(high-low)/2;
            square=mid*mid;
            if(square==num) return true;
            else if(square<num) low=mid+1;
            else high=mid-1;

         }
         return false;
         }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
