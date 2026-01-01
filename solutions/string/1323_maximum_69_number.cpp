// ✅ Problem: Maximum 69 Number
// 🔗 Link: https://leetcode.com/problems/maximum-69-number/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N^2)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        for (int a : nums1) {
            for (int b : nums2) {
                if (a % (b * k) == 0) {
                    count++;
                }
            }
        }
        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
