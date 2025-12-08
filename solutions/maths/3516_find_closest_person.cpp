// ✅ Problem: Find Closest Person
// 🔗 Link: https://leetcode.com/problems/find-closest-person/description/
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
    int findClosest(int x, int y, int z) {
        int dx = abs(x - z);
        int dy = abs(y - z);
        if (dx < dy) return 1;
        if (dx > dy) return 2;
        return 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
