// ✅ Problem: Maximum XOR of Two Numbers in an Array
// 🔗 Link: https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maxXOR = 0;
        int mask = 0;

        for (int i = 31; i >= 0; i--) {
            mask |= (1 << i);

            unordered_set<int> prefixes;

            for (int num : nums) {
                prefixes.insert(num & mask);
            }

            int candidate = maxXOR | (1 << i);

            for (int prefix : prefixes) {
                if (prefixes.count(candidate ^ prefix)) {
                    maxXOR = candidate;
                    break;
                }
            }
        }

        return maxXOR;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
