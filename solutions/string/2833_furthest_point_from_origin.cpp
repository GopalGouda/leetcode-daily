// ✅ Problem: Furthest Point From Origin
// 🔗 Link: https://leetcode.com/problems/furthest-point-from-origin/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0, right = 0, blank = 0;

        for (char c : moves) {
            if (c == 'L') left++;
            else if (c == 'R') right++;
            else blank++;
        }

        return abs(right - left) + blank;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
