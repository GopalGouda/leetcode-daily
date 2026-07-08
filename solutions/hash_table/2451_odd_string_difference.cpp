// ✅ Problem: Odd String Difference
// 🔗 Link: https://leetcode.com/problems/odd-string-difference/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(m*n)
// 💾 Space Complexity: O(m*n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string, int> freq;
        unordered_map<string, string> mp;

        for (string &word : words) {
            string key = "";
            for (int i = 1; i < word.size(); i++) {
                key += to_string(word[i] - word[i - 1]) + ",";
            }
            freq[key]++;
            mp[key] = word;
        }

        for (auto &it : freq) {
            if (it.second == 1)
                return mp[it.first];
        }

        return "";        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
