// ✅ Problem: Minimum Right Shifts to Sort the Array
// 🔗 Link: https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int breakIndex = -1;
        int count = 0;
        

        // Find where the order breaks (nums[i] > nums[i+1])
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
                count++;
                breakIndex = i;
            }
        }

        // Case 1: Already sorted
        if (count == 0)
            return 0;

        // Case 2: More than one break -> impossible
        if (count > 1)
            return -1;

        // Case 3: Exactly one break -> rotation possible
        // Check if last element <= first element (valid rotation)
        if (nums[n - 1] > nums[0])
            return -1;

        // Minimum right shifts needed
        return n - (breakIndex + 1);  
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
