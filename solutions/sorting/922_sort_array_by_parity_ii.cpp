// ✅ Problem: Sort Array By Parity II
// 🔗 Link: https://leetcode.com/problems/sort-array-by-parity-ii/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two Pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int even = 0, odd = 1;

        for (int num : nums) {
            if (num % 2 == 0) {
                ans[even] = num;
                even += 2;
            } else {
                ans[odd] = num;
                odd += 2;
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
