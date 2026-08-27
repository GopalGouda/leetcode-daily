// ✅ Problem: Special Array With X Elements Greater Than or Equal X
// 🔗 Link: https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n²)
// 💾 Space Complexity: O(1)
// 🧠 Approach:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();

        for (int x = 1; x <= n; x++) {
            int count = 0;

            for (int num : nums) {
                if (num >= x) {
                    count++;
                }
            }

            if (count == x) {
                return x;
            }
        }

        return -1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
