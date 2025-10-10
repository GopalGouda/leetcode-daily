// ✅ Problem: Minimum Cost to Reach Every Position
// 🔗 Link: https://leetcode.com/problems/minimum-cost-to-reach-every-position/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: //compare min. & current cost, then update ans with min

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n=cost.size();
        vector<int> ans(n);
        int min_so_far=INT_MAX;
        for(int i=0; i<n; i++){
            min_so_far=min(min_so_far, cost[i]); 
            ans[i]=min_so_far; //
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
