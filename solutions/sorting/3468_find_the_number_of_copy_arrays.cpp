// ✅ Problem: Find the Number of Copy Arrays
// 🔗 Link: https://leetcode.com/problems/find-the-number-of-copy-arrays/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        long long low = LLONG_MIN;
        long long high = LLONG_MAX;

        for (int i = 0; i < original.size(); i++) {
            low = max(low, (long long)bounds[i][0] - original[i]);
            high = min(high, (long long)bounds[i][1] - original[i]);
        }

        return (low > high) ? 0 : high - low + 1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
