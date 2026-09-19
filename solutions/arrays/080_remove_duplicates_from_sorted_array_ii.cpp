// ✅ Problem: Remove Duplicates from Sorted Array II
// 🔗 Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/
// 🗂 Topic: arrays
// 🕒 Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for (int num : nums) {
            if (k < 2 || num != nums[k - 2]) {
                nums[k] = num;
                k++;
            }
        }

        return k;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
