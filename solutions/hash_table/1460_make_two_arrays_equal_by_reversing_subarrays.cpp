// ✅ Problem: Make Two Arrays Equal by Reversing Subarrays
// 🔗 Link: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/
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
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int x : target) {
            freq[x]++;
        }

        for (int x : arr) {
            freq[x]--;
        }

        for (auto [key, count] : freq) {
            if (count != 0) {
                return false;
            }
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
