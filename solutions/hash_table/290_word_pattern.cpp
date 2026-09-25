// ✅ Problem: Word Pattern
// 🔗 Link: https://leetcode.com/problems/word-pattern/description/
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
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;

        for (int i = 0; i < pattern.size(); i++) {
            if (mp1[pattern[i]] != mp2[words[i]]) {
                return false;
            }

            mp1[pattern[i]] = i + 1;
            mp2[words[i]] = i + 1;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
