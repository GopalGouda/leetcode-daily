// ✅ Problem: Richest Customer Wealth
// 🔗 Link: https://leetcode.com/problems/richest-customer-wealth/description/
// 🗂 Topic: matrix
// ⏱ Time Complexity: O(N * M)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Iterate through each customer's accounts, calculate their total wealth, and keep track of the maximum wealth found. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (auto& customer : accounts) {
            int wealth = 0;
            for (int money : customer) {
                wealth += money;
            }
            maxWealth = max(maxWealth, wealth);
        }

        return maxWealth;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
