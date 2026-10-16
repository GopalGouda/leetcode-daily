// ✅ Problem: Single Element in a Sorted Array
// 🔗 Link: Single Element in a Sorted Array
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {

                left = mid + 2;
            } else {

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
