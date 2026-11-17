// ✅ Problem: Pascal's Triangle II
// 🔗 Link: https://leetcode.com/problems/pascals-triangle-ii/description/
// 🗂 Topic: dynamic_programming
// ⏱ Time Complexity: O(n^2)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;

        for (int i = 0; i <= rowIndex; i++) {
            ans.push_back(1);

            for (int j = i - 1; j > 0; j--) {
                ans[j] = ans[j] + ans[j - 1];
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
