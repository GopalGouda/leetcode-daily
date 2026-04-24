// ✅ Problem: 4Sum
// 🔗 Link: https://leetcode.com/problems/4sum/description/
// 🗂 Topic: two_pointer
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(k)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;

        for (int i = 0; i < n - 3; i++) {
            // Skip duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] 
                                  + nums[left] + nums[right];

                    if (sum == target) {
                        result.push_back({
                            nums[i], nums[j], nums[left], nums[right]
                        });

                        left++;
                        right--;

                        // Skip duplicates for left
                        while (left < right && nums[left] == nums[left - 1])
                            left++;

                        // Skip duplicates for right
                        while (left < right && nums[right] == nums[right + 1])
                            right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
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
