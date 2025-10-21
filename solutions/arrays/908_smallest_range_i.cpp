// ✅ Problem: Smallest Range I
// 🔗 Link: https://leetcode.com/problems/smallest-range-i/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn= INT_MAX, mx= INT_MIN;
        int ans;
        for(int x: nums){
            mn=min(mn, x);
            mx=max(mx, x);
        }
        // ans= (mx-k) - (mn+k)
        ans= (mx-mn)-2*k;
        return max(0, ans);
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
