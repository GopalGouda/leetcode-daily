// ✅ Problem: Apply Operations to an Array
// 🔗 Link: https://leetcode.com/problems/apply-operations-to-an-array/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two Pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        // Apply operations sequentially
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        // Move all zeros to the end
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Fill remaining positions with 0
        while (j < n) {
            nums[j] = 0;
            j++;
        }

        return nums;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
