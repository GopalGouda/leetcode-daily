// ✅ Problem: Maximize Pair Strength Using GCD
// 🔗 Link: https://leetcode.com/problems/maximize-pair-strength-using-gcd/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n^2 log M)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long a = nums[i];
                long long b = nums[j];

                long long g = gcd(a, b);

                long long strength = (a / g) * (b / g);

                ans = max(ans, strength);
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
