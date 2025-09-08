// ✅ Problem: Number of Good Pairs
// 🔗 Link: https://leetcode.com/problems/number-of-good-pairs/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach:Hash Map Frequency Counting

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans=0;
        for(int i : nums){
            ans+= count[i];
            count[i]++;
        }
        return ans;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
