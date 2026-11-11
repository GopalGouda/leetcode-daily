// ✅ Problem: Maximum Distance in Arrays
// 🔗 Link: https://leetcode.com/problems/maximum-distance-in-arrays/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini = arrays[0][0];
        int maxi = arrays[0].back();

        int ans = 0;

        for (int i = 1; i < arrays.size(); i++) {

            int currMin = arrays[i][0];
            int currMax = arrays[i].back();

            // Calculate distance using different arrays
            ans = max(ans, max(
                abs(currMax - mini),
                abs(maxi - currMin)
            ));

            // Update minimum and maximum
            mini = min(mini, currMin);
            maxi = max(maxi, currMax);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
