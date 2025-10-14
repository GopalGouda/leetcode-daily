// ✅ Problem: Sum of Good Numbers
// 🔗 Link: https://leetcode.com/problems/sum-of-good-numbers/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            bool good = true;

            // Check left neighbor (i - k)
            if (i - k >= 0 && nums[i] <= nums[i - k]) {
                good = false;
            }

            // Check right neighbor (i + k)
            if (i + k < n && nums[i] <= nums[i + k]) {
                good = false;
            }

            // If still good, add to sum
            if (good) sum += nums[i];
        }

        return sum;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
