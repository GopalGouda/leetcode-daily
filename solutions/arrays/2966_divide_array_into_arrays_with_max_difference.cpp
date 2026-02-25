// ✅ Problem: Divide Array Into Arrays With Max Difference
// 🔗 Link: https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(NO log N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i += 3) {
            if (nums[i + 2] - nums[i] > k) {
                return {};
            }
            result.push_back({nums[i], nums[i + 1], nums[i + 2]});
        }

        return result;       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
