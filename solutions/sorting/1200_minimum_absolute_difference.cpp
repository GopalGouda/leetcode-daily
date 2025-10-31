// ✅ Problem: Minimum Absolute Difference
// 🔗 Link: https://leetcode.com/problems/minimum-absolute-difference/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: Sorting
// ⏱ Time Complexity: O(N log N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
  vector<vector<int>> result;
        if (arr.size() < 2) return result;

        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        for (size_t i = 1; i < arr.size(); ++i) {
            int diff = arr[i] - arr[i-1];
            if (diff < minDiff) minDiff = diff;
        }

        for (size_t i = 1; i < arr.size(); ++i) {
            int diff = arr[i] - arr[i-1];
            if (diff == minDiff) {
                result.push_back({arr[i-1], arr[i]});
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
