// ✅ Problem: Find the Integer Added to Array I
// 🔗 Link: https://leetcode.com/problems/find-the-integer-added-to-array-i/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Basic maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int n = nums1.size();

        for (int num : nums1) sum1 += num;
        for (int num : nums2) sum2 += num;

        return (sum2 - sum1) / n;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
