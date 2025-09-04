// ✅ Problem: Find Minimum Operations to Make All Elements Divisible by Three
// 🔗 Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         int ops = 0;
        for (int num : nums) {
            int rem = num % 3;
            if (rem == 1 || rem == 2) ops += 1;
        }
        return ops;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
