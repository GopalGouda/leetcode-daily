// ✅ Problem: Special Array I
// 🔗 Link: https://leetcode.com/problems/special-array-i/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: basic maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i] % 2) == (nums[i + 1] % 2)) {
                return false; // same found
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
