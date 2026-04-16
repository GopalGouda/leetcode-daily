// ✅ Problem: Count Number of Pairs With Absolute Difference K
// 🔗 Link: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int num : nums) {
        // Check for (num - k)
        if (freq.find(num - k) != freq.end()) {
            count += freq[num - k];
        }

        // Check for (num + k)
        if (freq.find(num + k) != freq.end()) {
            count += freq[num + k];
        }

        // Update frequency
        freq[num]++;
    }

    return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
