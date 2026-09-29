// ✅ Problem:  Search in Rotated Sorted Array II
// 🔗 Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(nlog n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return true;

            // Cannot determine which side is sorted
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                ++left;
                --right;
            }
            // Left half is sorted
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
