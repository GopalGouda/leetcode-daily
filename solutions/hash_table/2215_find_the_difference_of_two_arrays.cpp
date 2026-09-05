// ✅ Problem: Find the Difference of Two Arrays
// 🔗 Link: https://leetcode.com/problems/find-the-difference-of-two-arrays/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n+m)
// 💾 Space Complexity: O(n+m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> ans1, ans2;

        for (int x : set1) {
            if (set2.find(x) == set2.end()) {
                ans1.push_back(x);
            }
        }

        for (int x : set2) {
            if (set1.find(x) == set1.end()) {
                ans2.push_back(x);
            }
        }

        return {ans1, ans2};        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
