// ✅ Problem: Shuffle the Array
// 🔗 Link: https://leetcode.com/problems/shuffle-the-array/description/
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
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        for (int i = 0; i < n; i++) {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
