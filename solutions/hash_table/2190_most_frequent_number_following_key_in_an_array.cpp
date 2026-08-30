// ✅ Problem: Most Frequent Number Following Key In an Array
// 🔗 Link: https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/description/
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
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> freq;

        int ans = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                int target = nums[i + 1];

                freq[target]++;

                if (freq[target] > maxCount) {
                    maxCount = freq[target];
                    ans = target;
                }
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
