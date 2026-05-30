// ✅ Problem: Arranging Coins
// 🔗 Link: https://leetcode.com/problems/arranging-coins/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0, right = n;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long coinsNeeded = mid * (mid + 1) / 2;

            if (coinsNeeded == n) {
                return mid;
            } else if (coinsNeeded < n) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
