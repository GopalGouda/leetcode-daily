// ✅ Problem: Number of Unequal Triplets in Array
// 🔗 Link: https://leetcode.com/problems/number-of-unequal-triplets-in-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        int ans = 0;
        int left = 0;
        int n = nums.size();

        for (auto& [value, count] : freq) {
            int right = n - left - count;

            ans += left * count * right;

            left += count;
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
