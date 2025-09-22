// ✅ Problem: Height Checker
// 🔗 Link: https://leetcode.com/problems/height-checker/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(Nlog n)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected=heights;
        sort(heights.begin(), heights.end());
        int count=0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expected[i]) count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
