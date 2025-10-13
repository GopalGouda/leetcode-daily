// ✅ Problem: Sign of the Product of an Array
// 🔗 Link: https://leetcode.com/problems/sign-of-the-product-of-an-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count_nagative=0; //count -ve in nums
        int ans; //store ans
        for(int i:nums){
            if(i==0) return 0; //if any zero= product 0.
            if(i<0) count_nagative++;
        }
        if(count_nagative%2==0) ans=1; //even no. +ve =+ve product.
        else if(count_nagative%2 !=0) ans=-1; //odd no. -ve= -ve product. 
        return ans;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
