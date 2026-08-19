// ✅ Problem: Rank Transform of an Array
// 🔗 Link: https://leetcode.com/problems/rank-transform-of-an-array/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;
        int r = 1;

        for (int x : sorted) {
            if (!rank.count(x)) {
                rank[x] = r++;
            }
        }

        for (int& x : arr) {
            x = rank[x];
        }

        return arr;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
