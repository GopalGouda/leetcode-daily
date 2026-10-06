// ✅ Problem: Find All Duplicates in an Array
// 🔗 Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
// 🗂 Topic: hash_table
// 🕒 Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;

        for (int x : nums) {
            int index = abs(x) - 1;

            if (nums[index] < 0) {
                // x has appeared before
                result.push_back(abs(x));
            } else {
                // Mark x as seen
                nums[index] = -nums[index];
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
