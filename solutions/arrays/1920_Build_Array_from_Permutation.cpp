// ✅ Problem: array
// 🔗 Link: https://leetcode.com/problems/build-array-from-permutation/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: Build Array from Permutation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: simple use of vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n= nums.size();
        vector <int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;

    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
