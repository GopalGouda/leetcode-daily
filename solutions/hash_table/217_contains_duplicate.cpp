// ✅ Problem: Contains Duplicate
// 🔗 Link: https://leetcode.com/problem-list/bit-manipulation/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true; // duplicate found
            }
            seen.insert(num);
        }
        return false; // no duplicates
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
