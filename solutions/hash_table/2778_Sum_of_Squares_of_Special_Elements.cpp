// ✅ Problem: Roman to Integer
// 🔗 Link: https://leetcode.com/problems/roman-to-integer/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
    int n = nums.size();
    int result = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            result += nums[i - 1] * nums[i - 1]; // 0-based indexing
        }
    }

    return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
