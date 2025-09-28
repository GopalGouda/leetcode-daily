// ✅ Problem: Earliest Time to Finish One Task
// 🔗 Link: https://leetcode.com/problems/earliest-time-to-finish-one-task/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for (auto &task : tasks) {
            int s = task[0], t = task[1];
            ans = min(ans, s + t);
        }
        return ans;           
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
