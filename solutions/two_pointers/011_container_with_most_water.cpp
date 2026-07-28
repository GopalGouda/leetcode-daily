// ✅ Problem: Container With Most Water
// 🔗 Link: https://leetcode.com/problems/container-with-most-water/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two Pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ans = 0;

        while (left < right) {
            int width = right - left;
            int currArea = min(height[left], height[right]) * width;
            ans = max(ans, currArea);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
