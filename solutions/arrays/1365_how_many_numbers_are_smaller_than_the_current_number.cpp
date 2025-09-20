// ✅ Problem: How Many Numbers Are Smaller Than the Current Number
// 🔗 Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N+K)
// 💾 Space Complexity: O(K)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
 vector<int> count(101, 0);  // since nums[i] ≤ 100
        
        for (int num : nums) count[num]++;
        
        // prefix sum to know how many numbers are smaller
        for (int i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }

        vector<int> result;
        for (int num : nums) {
            result.push_back(num == 0 ? 0 : count[num - 1]);
        }
        return result;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
