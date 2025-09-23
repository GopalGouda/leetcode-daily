// ✅ Problem: Sort Array by Increasing Frequency
// 🔗 Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(Nlog n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Count frequencies
        for (int n : nums) {
            freq[n]++;
        }
        
        // Custom sort
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;  // larger value first if same frequency
            }
            return freq[a] < freq[b]; // smaller frequency first
        });
        
        return nums;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
