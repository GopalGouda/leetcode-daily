// ✅ Problem: Minimum Average of Smallest and Largest Elements
// 🔗 Link: https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N log N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <cfloat>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;
        double minAvg = DBL_MAX;

        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;
            minAvg = min(minAvg, avg);
            left++;
            right--;
        }

        return minAvg;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
