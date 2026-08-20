// ✅ Problem: Find Common Characters
// 🔗 Link: https://leetcode.com/problems/find-common-characters/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n*m)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);

        for (string& word : words) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }

        vector<string> ans;

        for (int i = 0; i < 26; i++) {
            while (minFreq[i] > 0) {
                ans.push_back(string(1, 'a' + i));
                minFreq[i]--;
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
