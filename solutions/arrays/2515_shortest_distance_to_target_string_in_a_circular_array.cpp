// ✅ Problem: Shortest Distance to Target String in a Circular Array
// 🔗 Link: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int diff = abs(startIndex - i);

                // Direct distance vs circular/wrapped distance
                int dist = min(diff, n - diff);

                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}