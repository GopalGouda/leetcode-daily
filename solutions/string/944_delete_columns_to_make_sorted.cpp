// ✅ Problem: Delete Columns to Make Sorted
// 🔗 Link: https://leetcode.com/problems/delete-columns-to-make-sorted/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N*M)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if (strs.empty()) return 0;
        int n = strs.size();
        int m = strs[0].size();
        int deletions = 0;

        for (int col = 0; col < m; ++col) {
            for (int row = 1; row < n; ++row) {
                if (strs[row][col] < strs[row-1][col]) {
                    ++deletions;
                    break; // move to next column
                }
            }
        }
        return deletions;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
