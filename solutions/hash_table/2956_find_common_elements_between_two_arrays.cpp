// ✅ Problem: Find Common Elements Between Two Arrays
// 🔗 Link: https://leetcode.com/problems/find-common-elements-between-two-arrays/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n + m)
// 💾 Space Complexity: O(n + m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    int answer1 = 0, answer2 = 0;

    // Count elements in nums1 that exist in nums2
    for (int x : nums1) {
        if (set2.count(x)) {
            answer1++;
        }
    }

    // Count elements in nums2 that exist in nums1
    for (int x : nums2) {
        if (set1.count(x)) {
            answer2++;
        }
    }

    return {answer1, answer2};        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
