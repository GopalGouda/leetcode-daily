// ✅ Problem: Missing Number
// 🔗 Link: https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: maths
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: maths expected_sum= n(n+1)/2


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for (int num : nums) {
        actual_sum += num;
    }

    return expected_sum - actual_sum;
}

};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
