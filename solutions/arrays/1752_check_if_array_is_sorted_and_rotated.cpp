// ✅ Problem: Check if Array Is Sorted and Rotated
// 🔗 Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
