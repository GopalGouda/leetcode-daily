// ✅ Problem: Find the Array Concatenation Value
// 🔗 Link: https://leetcode.com/problems/find-the-array-concatenation-value/description/
// 🗂 Topic: two_pointers
// 🕒 Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            string s = to_string(nums[left]) + to_string(nums[right]);
            ans += stoll(s);

            left++;
            right--;
        }

        if (left == right) {
            ans += nums[left];
        }

        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
