// ✅ Problem: Construct the Minimum Bitwise Array I
// 🔗 Link: https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N∗Log(Max(Nums)))
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int p : nums) {
            // If p is even, impossible (only prime even is 2)
            if (p % 2 == 0) {
                ans.push_back(-1);
                continue;
            }

            // Count trailing 1s
            int temp = p;
            int t = 0;
            while (temp & 1) {
                t++;
                temp >>= 1;
            }

            // Compute minimum x
            int x = p - (1 << (t - 1));
            ans.push_back(x);
        }

        return ans; 
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
