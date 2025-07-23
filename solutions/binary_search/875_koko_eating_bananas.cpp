// ✅ Problem: Koko Eating Bananas
// 🔗 Link: https://leetcode.com/problems/koko-eating-bananas/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(Nlogm)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(int mid, vector<int>& piles, int h) {
        int count = 0;
        for (int i = 0; i < piles.size(); i++) {
            count += (piles[i] + mid - 1) / mid;  // ceil division
            if (count > h) return false;          // early exit
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin(), piles.end());
        int lo = 1, hi = maxPile, ans = maxPile;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(mid, piles, h)) {
                ans = mid;
                hi = mid - 1;  // try smaller speeds
            } else {
                lo = mid + 1;  // need more speed
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
