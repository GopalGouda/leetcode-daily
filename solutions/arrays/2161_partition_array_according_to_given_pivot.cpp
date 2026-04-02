// ✅ Problem: Partition Array According to Given Pivot
// 🔗 Link: https://leetcode.com/problems/partition-array-according-to-given-pivot/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> ans;

    // First pass: < pivot
    for (int num : nums)
        if (num < pivot)
            ans.push_back(num);

    // Second pass: == pivot
    for (int num : nums)
        if (num == pivot)
            ans.push_back(num);

    // Third pass: > pivot
    for (int num : nums)
        if (num > pivot)
            ans.push_back(num);

    return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
