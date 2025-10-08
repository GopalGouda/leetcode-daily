// ✅ Problem: Find N Unique Integers Sum up to Zero
// 🔗 Link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxDiff=0;
        for(int i=0; i<n; i++){
            int next= (i+1)%n; //using % to handle circle
            int diff= abs(nums[i]-nums[next]);
            maxDiff= max(maxDiff,diff);
        }
        return maxDiff;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
