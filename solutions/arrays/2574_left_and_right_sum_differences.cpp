// ✅ Problem: Left and Right Sum Differences
// 🔗 Link: https://leetcode.com/problems/left-and-right-sum-differences/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        vector<int> answer;

        for (int num : nums) {
            int rightSum = totalSum - leftSum - num;
            answer.push_back(abs(leftSum - rightSum));
            leftSum += num;
        }

        return answer;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
