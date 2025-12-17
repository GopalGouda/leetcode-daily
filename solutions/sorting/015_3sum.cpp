// ✅ Problem: 3Sum
// 🔗 Link: https://leetcode.com/problems/3sum/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(N2)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two pointers after sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate fixed elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // No need to continue if nums[i] > 0
            if (nums[i] > 0)
                break;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for left pointer
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    // Skip duplicates for right pointer
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
