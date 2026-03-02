// ✅ Problem: Widest Vertical Area Between Two Points Containing No Points
// 🔗 Link: https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/
// 🗂 Topic: Sorting
// ⏱ Time Complexity: O(NlogN)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // Extract x-coordinates
        vector<int> xValues;
        for (auto& point : points) {
            xValues.push_back(point[0]);
        }
        
        // Sort x-coordinates
        sort(xValues.begin(), xValues.end());
        
        // Find maximum gap
        int maxWidth = 0;
        for (int i = 1; i < xValues.size(); i++) {
            maxWidth = max(maxWidth, xValues[i] - xValues[i - 1]);
        }
        
        return maxWidth;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
