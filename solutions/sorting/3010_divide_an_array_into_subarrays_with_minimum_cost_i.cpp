// ✅ Problem: Divide an Array Into Subarrays With Minimum Cost I
// 🔗 Link: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];

        int a = INT_MAX, b = INT_MAX;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < a) {
                b = a;
                a = nums[i];
            } else if (nums[i] < b) {
                b = nums[i];
            }
        }

        return first + a + b;
            
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
