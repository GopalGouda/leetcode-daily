// ✅ Problem: Third Maximum Number
// 🔗 Link: https://leetcode.com/problems/third-maximum-number/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int thirdMax(vector<int>& nums) {
        // Step 1: find the maximum
        int first = *max_element(nums.begin(), nums.end());

        // Step 2: find the maximum smaller than 'first'
        int second = INT_MIN;
        bool foundSecond = false;
        for (int x : nums) {
            if (x < first) {
                if (!foundSecond || x > second) {
                    second = x;
                    foundSecond = true;
                }
            }
        }

        if (!foundSecond) return first; // fewer than 2 distinct numbers

        // Step 3: find the maximum smaller than 'second'
        int third = INT_MIN;
        bool foundThird = false;
        for (int x : nums) {
            if (x < second) {
                if (!foundThird || x > third) {
                    third = x;
                    foundThird = true;
                }
            }
        }

        return foundThird ? third : first;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
