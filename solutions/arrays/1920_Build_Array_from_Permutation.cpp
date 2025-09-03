// ✅ Problem: array
// 🔗 Link: https://leetcode.com/problems/build-array-from-permutation/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: Build Array from Permutation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: nums[i]=nums[i]+(n×(nums[nums[i]]%n))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n= nums.size();
// Encode both old and new values in nums
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] + n * (nums[nums[i]] % n);
        }

        // Extract the new values
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] / n;
        }

        return nums;

    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
