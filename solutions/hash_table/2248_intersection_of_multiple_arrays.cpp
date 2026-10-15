// ✅ Problem: Intersection of Multiple Arrays
// 🔗 Link: https://leetcode.com/problems/intersection-of-multiple-arrays/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n+m)
// 💾 Space Complexity: O(m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
vector<int> freq(1001, 0);
        vector<int> ans;

        for (auto& arr : nums) {
            for (int num : arr) {
                freq[num]++;
            }
        }

        for (int i = 1; i <= 1000; i++) {
            if (freq[i] == nums.size()) {
                ans.push_back(i);
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
