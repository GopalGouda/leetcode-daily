// ✅ Problem: Maximum Number of Pairs in Array
// 🔗 Link: https://leetcode.com/problems/maximum-number-of-pairs-in-array/description/
// 🗂 Topic: hash_table
// 🕒 Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: Use a hash table to count the frequency of each element, then calculate the number of pairs and leftovers.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int pairs = 0;
        int leftovers = 0;

        for (auto& [num, count] : freq) {
            pairs += count / 2;
            leftovers += count % 2;
        }

        return {pairs, leftovers};        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
