// ✅ Problem: Find Indices of Stable Mountains
// 🔗 Link: https://leetcode.com/problems/find-indices-of-stable-mountains/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;
        for(int i=1; i<height.size(); i++){
            if(height[i-1]>threshold) ans.push_back(i); //push index no.
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
