// ✅ Problem: 1005
// 🔗 Link: https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        int sum = accumulate(nums.begin(), nums.end(), 0);

        if (k % 2 == 1) {
            int mn = *min_element(nums.begin(), nums.end());
            sum -= 2 * mn;
        }

        return sum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
