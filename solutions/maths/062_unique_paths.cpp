// ✅ Problem: Unique Paths
// 🔗 Link: https://leetcode.com/problems/unique-paths/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(M)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fastest approach using combinations
class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;
        for(int i = 1; i <= m - 1; i++) {
            res = res * (n - 1 + i) / i;
        }
        return res;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
