// ✅ Problem: Partition Array into Disjoint Intervals
// 🔗 Link: Partition Array into Disjoint Intervals
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
int n = nums.size();

        vector<int> suffixMin(n);

        suffixMin[n - 1] = nums[n - 1];

        // Build suffix minimum array
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        int leftMax = nums[0];

        // Find the smallest valid partition
        for (int i = 0; i < n - 1; i++) {
            leftMax = max(leftMax, nums[i]);

            if (leftMax <= suffixMin[i + 1]) {
                return i + 1;
            }
        }

        return n;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
