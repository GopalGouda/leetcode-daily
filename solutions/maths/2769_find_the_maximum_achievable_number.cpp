// ✅ Problem: Find the Maximum Achievable Number
// 🔗 Link: https://leetcode.com/problems/find-the-maximum-achievable-number/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        long long ans = (long long)num + 2LL * t;
        return (int)ans;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
