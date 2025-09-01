// ✅ Problem: Intersection of Two Arrays
// 🔗 Link: https://leetcode.com/problems/intersection-of-two-arrays/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(Mlogm+Nlogn)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two Pointer Approach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         // Step 1: Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0, j = 0;
        vector<int> result;
        
        // Step 2: Use two pointers
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                // To avoid duplicates in result
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
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
