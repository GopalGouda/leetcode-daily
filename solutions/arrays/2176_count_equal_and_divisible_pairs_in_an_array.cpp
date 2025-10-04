// ✅ Problem: Count Equal and Divisible Pairs in an Array
// 🔗 Link: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N^2)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] == nums[j] && ((i * j) % k == 0)) {
                count++;
            }
        }
    }

    return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
