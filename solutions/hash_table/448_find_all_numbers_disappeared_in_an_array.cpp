// ✅ Problem: Find All Numbers Disappeared in an Array
// 🔗 Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    
    // Step 1: Mark visited indices
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }
    
    // Step 2: Collect missing numbers
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            result.push_back(i + 1);
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
