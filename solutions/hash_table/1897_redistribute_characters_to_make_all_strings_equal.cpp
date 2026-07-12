// ✅ Problem: Redistribute Characters to Make All Strings Equal
// 🔗 Link: https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> freq(26, 0);

        for (string &word : words) {
            for (char c : word) {
                freq[c - 'a']++;
            }
        }

        int n = words.size();
        for (int count : freq) {
            if (count % n != 0)
                return false;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
