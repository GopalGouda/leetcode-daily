// ✅ Problem: Intersection of Two Arrays
// 🔗 Link: https://leetcode.com/problems/intersection-of-two-arrays/description/
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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> result;

        for (int num : nums2) {
            if (s.count(num)) {
                result.insert(num);
            }
        }

        return vector<int>(result.begin(), result.end());        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
