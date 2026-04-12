// ✅ Problem: Minimum Number of Operations to Make Elements in Array Distinct
// 🔗 Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
#include <unordered_set>
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    unordered_set<int> seen;
    int n = nums.size();
    
    int i = n - 1;
    
    // Find largest suffix with unique elements
    while (i >= 0) {
        if (seen.count(nums[i])) {
            break;
        }
        seen.insert(nums[i]);
        i--;
    }
    
    int remove = i + 1;
    
    // Ceiling division of remove / 3
    return (remove + 2) / 3;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
