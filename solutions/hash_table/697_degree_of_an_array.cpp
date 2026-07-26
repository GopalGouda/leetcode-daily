// ✅ Problem: Degree of an Array
// 🔗 Link: https://leetcode.com/problems/degree-of-an-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> first, last, freq;

        for (int i = 0; i < nums.size(); i++) {
            if (!first.count(nums[i]))
                first[nums[i]] = i;

            last[nums[i]] = i;
            freq[nums[i]]++;
        }

        int degree = 0;
        for (auto &p : freq)
            degree = max(degree, p.second);

        int ans = nums.size();
        for (auto &p : freq) {
            if (p.second == degree) {
                ans = min(ans, last[p.first] - first[p.first] + 1);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
