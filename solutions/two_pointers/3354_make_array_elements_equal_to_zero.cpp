// ✅ Problem: Make Array Elements Equal to Zero
// 🔗 Link: https://leetcode.com/problems/make-array-elements-equal-to-zero/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        long long total = 0;

        for (int x : nums) {
            total += x;
        }

        long long left = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            long long right = total - left - nums[i];

            if (nums[i] == 0) {
                if (left == right) {
                    ans += 2;
                } else if (abs(left - right) == 1) {
                    ans += 1;
                }
            }

            left += nums[i];
        }

        return ans;        
    }
};
