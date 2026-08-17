// ✅ Problem: Intersection of Two Arrays II
// 🔗 Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n+m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;

        // Count elements in nums1
        for (int num : nums1) {
            freq[num]++;
        }

        // Find intersection
        for (int num : nums2) {
            if (freq[num] > 0) {
                result.push_back(num);
                freq[num]--;
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
