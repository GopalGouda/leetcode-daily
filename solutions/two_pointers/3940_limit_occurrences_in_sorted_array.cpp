// ✅ Problem: Limit Occurrences in Sorted Array
// 🔗 Link: https://leetcode.com/problems/limit-occurrences-in-sorted-array/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                count = 1;
            } else {
                count++;
            }

            if (count <= k) {
                ans.push_back(nums[i]);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
