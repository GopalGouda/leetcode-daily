// ✅ Problem: Largest Number at least twice of others
// 🔗 Link: https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;  // single element case

        int max1 = -1, max2 = -1;  // largest and second largest
        int idx = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                idx = i;
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }

        return (max1 >= 2 * max2) ? idx : -1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
