// ✅ Problem: Valid Anagram
// 🔗 Link: https://leetcode.com/problems/valid-anagram/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(k)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0) return false;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
