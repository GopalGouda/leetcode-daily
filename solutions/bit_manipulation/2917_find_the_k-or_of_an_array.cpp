// ✅ Problem: Find the K-or of an Array
// 🔗 Link: https://leetcode.com/problems/find-the-k-or-of-an-array/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans = 0;

        for (int bit = 0; bit < 31; bit++) {
            int count = 0;

            for (int num : nums) {
                if (num & (1 << bit)) {
                    count++;
                }
            }

            if (count >= k) {
                ans |= (1 << bit);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
