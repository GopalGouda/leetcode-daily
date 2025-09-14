// ✅ Problem: Minimum Element After Replacement With Digit Sum
// 🔗 Link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N*K)
// 💾 Space Complexity: O(1)
// 🧠 Approach: basic maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int num: nums){
            int j=0;
            while(num>0){
                j+=num%10;
                num/=10;
            }
            ans= min(ans, j);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
