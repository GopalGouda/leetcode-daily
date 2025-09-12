// ✅ Problem: Create Target Array in the Given Order
// 🔗 Link: https://leetcode.com/problems/create-target-array-in-the-given-order/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N²)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        target.reserve(nums.size()); // optional: reduce reallocations
        for (int i = 0; i < nums.size(); ++i) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
