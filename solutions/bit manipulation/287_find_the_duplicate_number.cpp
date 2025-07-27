// ✅ Problem: Find the Duplicate Number
// 🔗 Link: https://leetcode.com/problems/find-the-duplicate-number/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: Bit Manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Floyd’s Cycle Detection -Two Pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Step 1: Use two pointers to find a meeting point (inside the cycle)
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];          // Move 1 step
            fast = nums[nums[fast]];    // Move 2 steps
        } while (slow != fast);         // Loop until they meet inside the cycle

        // Step 2: Start one pointer from the beginning
        slow = nums[0];

        // Move both pointers 1 step at a time
        // The point where they meet is the duplicate number (start of cycle)
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow; // or return fast; both point to the duplicate
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
