// ✅ Problem: Decompress Run-Length Encoded List
// 🔗 Link: https://leetcode.com/problems/decompress-run-length-encoded-list/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N+M)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> ans;

        for(int i=0; i<nums.size()-1; i=i+2){
            int freq=nums[i];
            int val=nums[i+1];
            ans.insert(ans.end(), freq, val);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
