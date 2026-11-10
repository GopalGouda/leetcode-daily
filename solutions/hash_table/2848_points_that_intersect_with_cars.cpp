// ✅ Problem: Points That Intersect With Cars
// 🔗 Link: https://leetcode.com/problems/points-that-intersect-with-cars/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        bool covered[101] = {false};

        for (auto car : nums) {
            int start = car[0];
            int end = car[1];

            for (int i = start; i <= end; i++) {
                covered[i] = true;
            }
        }

        int count = 0;

        for (int i = 1; i <= 100; i++) {
            if (covered[i]) {
                count++;
            }
        }

        return count;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
