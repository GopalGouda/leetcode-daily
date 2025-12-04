// ✅ Problem: Monotonic Array
// 🔗 Link: https://leetcode.com/problems/monotonic-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1])
                decreasing = false;
            if (nums[i] < nums[i - 1])
                increasing = false;
        }

        return increasing || decreasing;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
