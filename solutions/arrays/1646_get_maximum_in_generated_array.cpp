// ✅ Problem: Get Maximum in Generated Array
// 🔗 Link: https://leetcode.com/problems/get-maximum-in-generated-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) return 0;

        vector<int> nums(n + 1);
        nums[0] = 0;
        nums[1] = 1;

        int ans = 1;

        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                nums[i] = nums[i / 2];
            } else {
                nums[i] = nums[i / 2] + nums[i / 2 + 1];
            }

            ans = max(ans, nums[i]);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
