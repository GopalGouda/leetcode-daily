// ✅ Problem: Maximum Product Difference Between Two Pairs
// 🔗 Link: https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: two maximum nums product - two smallest nums product

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    
    for (int num : nums) {
        // Track two largest numbers
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
        
        // Track two smallest numbers
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }
    
    return (max1 * max2) - (min1 * min2);
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
