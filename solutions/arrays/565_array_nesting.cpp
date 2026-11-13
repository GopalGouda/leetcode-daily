// ✅ Problem: Array Nesting
// 🔗 Link: https://leetcode.com/problems/array-nesting/description/
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
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();

        vector<bool> visited(n, false);

        int maxLength = 0;

        for (int i = 0; i < n; i++) {

            if (!visited[i]) {

                int count = 0;
                int curr = i;

                while (!visited[curr]) {

                    visited[curr] = true;
                    count++;

                    curr = nums[curr];
                }

                maxLength = max(maxLength, count);
            }
        }

        return maxLength;        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
