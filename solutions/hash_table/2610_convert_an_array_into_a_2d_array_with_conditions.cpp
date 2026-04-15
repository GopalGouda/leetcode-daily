// ✅ Problem: Convert an Array Into a 2D Array With Conditions
// 🔗 Link: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    unordered_map<int, int> freq;
    
    // Count frequency
    for (int num : nums) {
        freq[num]++;
    }
    
    // Find maximum frequency (number of rows)
    int maxFreq = 0;
    for (auto &p : freq) {
        maxFreq = max(maxFreq, p.second);
    }
    
    // Create result with maxFreq rows
    vector<vector<int>> res(maxFreq);
    
    // Distribute elements
    for (auto &p : freq) {
        int num = p.first;
        int count = p.second;
        
        for (int i = 0; i < count; i++) {
            res[i].push_back(num);
        }
    }
    
    return res;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
