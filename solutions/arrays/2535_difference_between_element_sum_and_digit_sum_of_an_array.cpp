// ✅ Problem: Difference Between Element Sum and Digit Sum of an Array
// 🔗 Link: http://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: basic maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int size=nums.size();
        int elementSum=0;
        int digitSum=0;
        for(int i=0; i<size; i++){
            elementSum+=nums[i];
            int num=nums[i];
            while(num>0){
                digitSum+=num%10;
                num/=10;
            }
        }
        
        int ans=abs(elementSum-digitSum);
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
