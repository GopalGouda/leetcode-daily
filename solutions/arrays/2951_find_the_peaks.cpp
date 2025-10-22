// ✅ Problem: Find the Peaks
// 🔗 Link: https://leetcode.com/problems/find-the-peaks/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    vector<int> findPeaks(vector<int>& mountain) {
        int size=mountain.size();
        vector<int> ans;
        for(int i=1; i<size-1; i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
