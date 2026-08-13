// ✅ Problem: Range Addition II
// 🔗 Link: https://leetcode.com/problems/range-addition-ii/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(k) where k is the number of operations
// 💾 Space Complexity: O(1)
// 🧠 Approach: Find the intersection of all the operation ranges

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRows = m;
        int minCols = n;

        for (auto& op : ops) {
            minRows = min(minRows, op[0]);
            minCols = min(minCols, op[1]);
        }

        return minRows * minCols;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
