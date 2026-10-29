// ✅ Problem: Rectangle Overlap
// 🔗 Link: https://leetcode.com/problems/rectangle-overlap/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return rec1[0] < rec2[2] &&
               rec1[2] > rec2[0] &&
               rec1[1] < rec2[3] &&
               rec1[3] > rec2[1];
    }        
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
