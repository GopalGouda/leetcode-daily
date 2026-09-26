// ✅ Problem: Find Minimum in Rotated Sorted Array
// 🔗 Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                // Minimum is in the right half
                left = mid + 1;
            } else {
                // Minimum is at mid or in the left half
                right = mid;
            }
        }

        return nums[left];
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
