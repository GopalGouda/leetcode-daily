// ✅ Problem: Summary Ranges
// 🔗 Link: https://leetcode.com/problems/summary-ranges/submissions/1978463537/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1) excluding the output vector
// 🧠 Approach: Two pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
vector<string> result;
        
        if (nums.empty()) return result;
        
        int start = nums[0];
        
        for (int i = 0; i < nums.size(); i++) {
            // Check if it's end of range
            if (i == nums.size() - 1 || nums[i] + 1 != nums[i + 1]) {
                
                if (start == nums[i]) {
                    result.push_back(to_string(start));
                } else {
                    result.push_back(to_string(start) + "->" + to_string(nums[i]));
                }
                
                // Move start to next element
                if (i < nums.size() - 1) {
                    start = nums[i + 1];
                }
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
