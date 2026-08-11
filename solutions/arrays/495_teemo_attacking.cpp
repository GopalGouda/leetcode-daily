// ✅ Problem: Teemo Attacking
// 🔗 Link: https://leetcode.com/problems/teemo-attacking/description/
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
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total = 0;

        for (int i = 1; i < timeSeries.size(); i++) {
            total += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }

        total += duration;

        return total;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
