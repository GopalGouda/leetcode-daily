// ✅ Problem: Count Pairs Of Similar Strings
// 🔗 Link: https://leetcode.com/problems/count-pairs-of-similar-strings/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n*m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<int, int> mp;
        int count = 0;

        for (string word : words) {

            int mask = 0;

            for (char ch : word) {
                mask |= (1 << (ch - 'a'));
            }

            count += mp[mask];

            mp[mask]++;
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
