// ✅ Problem: Concatenation of Array
// 🔗 Link: https://leetcode.com/problems/concatenation-of-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(2*n);
for(int i=0; i<2*n;i++){
    ans[i]=nums[i%n];
}
    return ans;     
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
