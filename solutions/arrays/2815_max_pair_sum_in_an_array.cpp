// ✅ Problem: Max Pair Sum in an Array
// 🔗 Link: https://leetcode.com/problems/max-pair-sum-in-an-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> maxNum(10, -1);
        int ans = -1;

        for (int num : nums) {
            int largestDigit = getLargestDigit(num);

            if (maxNum[largestDigit] != -1) {
                ans = max(ans, num + maxNum[largestDigit]);
            }

            maxNum[largestDigit] = max(maxNum[largestDigit], num);
        }

        return ans;
    }

private:
    int getLargestDigit(int num) {
        int largest = 0;

        while (num > 0) {
            largest = max(largest, num % 10);
            num /= 10;
        }

        return largest;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
