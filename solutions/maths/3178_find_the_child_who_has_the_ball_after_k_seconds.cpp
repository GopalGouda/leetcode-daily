// ✅ Problem: Find the Child Who Has the Ball After K Seconds
// 🔗 Link: https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Mathematical approach to find the position of the child with the ball after k seconds.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfChild(int n, int k) {
        int distance = k % (2 * (n - 1));

        if (distance <= n - 1) {
            return distance;
        }

        return 2 * (n - 1) - distance;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
