// ✅ Problem: Best Time to Buy and Sell Stock
// 🔗 Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// 🗂 Topic: Dynamic_Programming
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);

            int profit = price - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
