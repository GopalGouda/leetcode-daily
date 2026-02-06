// ✅ Problem: Compute Alternating Sum
// 🔗 Link: https://leetcode.com/problems/compute-alternating-sum/submissions/1910578002/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                sum += nums[i];
            } else {
                sum -= nums[i];
            }
        }

        return sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
