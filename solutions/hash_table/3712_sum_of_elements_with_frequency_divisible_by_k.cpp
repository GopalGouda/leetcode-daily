// ✅ Problem: Sum of Elements With Frequency Divisible by K
// 🔗 Link: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    
    // Count frequencies
    for (int num : nums) {
        freq[num]++;
    }
    
    int totalSum = 0;
    
    // Calculate result
    for (auto& [num, count] : freq) {
        if (count % k == 0) {
            totalSum += num * count;
        }
    }
    
    return totalSum;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
