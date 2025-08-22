// ✅ Problem: Minimum Operations to Collect Elements
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-collect-elements/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(K)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
int minOperations(vector<int>& nums, int k) {
    vector<bool> have(k + 1, false);
    int got = 0, ops = 0;
    for (int i = (int)nums.size() - 1; i >= 0; --i) {
        ++ops;
        int x = nums[i];
        if (1 <= x && x <= k && !have[x]) {
            have[x] = true;
            if (++got == k) return ops;
        }
    }
    return (int)nums.size(); // if needed
}
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
