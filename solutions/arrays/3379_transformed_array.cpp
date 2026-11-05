// ✅ Problem: Transformed Array
// 🔗 Link: https://leetcode.com/problems/transformed-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            int index = (i + nums[i]) % n;

            // Handle negative index
            if (index < 0) {
                index += n;
            }

            result[i] = nums[index];
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
