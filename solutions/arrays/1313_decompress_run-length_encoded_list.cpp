// ✅ Problem: Decompress Run-Length Encoded List
// 🔗 Link: https://leetcode.com/problems/decompress-run-length-encoded-list/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
  vector<int> result;

        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val  = nums[i + 1];

            for (int j = 0; j < freq; j++) {
                result.push_back(val);
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
