// ✅ Problem: Partition Array Into Three Parts With Equal Sum
// 🔗 Link: https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = 0;

        for (int x : arr) {
            total += x;
        }

        // Total must be divisible by 3
        if (total % 3 != 0) {
            return false;
        }

        int target = total / 3;
        int sum = 0;
        int parts = 0;

        for (int x : arr) {
            sum += x;

            if (sum == target) {
                parts++;
                sum = 0;
            }
        }

        return parts >= 3;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
