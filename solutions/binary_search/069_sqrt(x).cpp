// ✅ Problem: sqrt(x)
// 🔗 Link: https://leetcode.com/problems/sqrtx/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int low=0;
        int high=x;
        int mid;
        while(low<=high){
            mid= low+(high-low)/2;
            if((long long)mid*mid==x) return mid; //used long long type cast to prevent overflow
            else if((long long)mid*mid>x) high=mid-1;
            else low=mid+1;
        }
        return high;
    }
};

int main() {
    Solution sol;
    int x=16;
    int result=sol.mySqrt(x);
    cout << "Square root of " << x << " is: " << result << endl;
    return 0;
}
