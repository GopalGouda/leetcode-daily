// ✅ Problem: Sort Integers by Binary Reflection
// 🔗 Link: https://leetcode.com/problems/sort-integers-by-binary-reflection/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int reflection(int n) {
        int rev = 0;

        while (n > 0) {
            rev = (rev << 1) | (n & 1);
            n >>= 1;
        }

        return rev;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int ra = reflection(a);
            int rb = reflection(b);

            if (ra == rb) {
                return a < b;
            }

            return ra < rb;
        });

        return nums;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
