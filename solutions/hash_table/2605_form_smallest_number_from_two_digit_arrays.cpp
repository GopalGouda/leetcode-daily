// ✅ Problem: Form Smallest Number From Two Digit Arrays
// 🔗 Link: Form Smallest Number From Two Digit Arrays
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n+m)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        bool present[10] = {};

        for (int x : nums1) {
            present[x] = true;
        }

        int common = 10;
        int min1 = 10, min2 = 10;

        for (int x : nums1) {
            min1 = min(min1, x);
        }

        for (int x : nums2) {
            min2 = min(min2, x);

            if (present[x]) {
                common = min(common, x);
            }
        }

        if (common != 10) {
            return common;
        }

        return min(min1, min2) * 10 + max(min1, min2);
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
