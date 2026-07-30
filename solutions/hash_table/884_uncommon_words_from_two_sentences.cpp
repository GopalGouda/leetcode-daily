// ✅ Problem: Uncommon Words from Two Sentences
// 🔗 Link: https://leetcode.com/problems/uncommon-words-from-two-sentences/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n+m) where n and m are the lengths of the two sentences
// 💾 Space Complexity: O(n+m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;

        string word;
        stringstream ss1(s1), ss2(s2);

        while (ss1 >> word) {
            freq[word]++;
        }

        while (ss2 >> word) {
            freq[word]++;
        }

        vector<string> ans;
        for (auto &it : freq) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
