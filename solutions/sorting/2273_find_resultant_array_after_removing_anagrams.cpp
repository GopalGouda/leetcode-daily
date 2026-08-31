// ✅ Problem: Find Resultant Array After Removing Anagrams
// 🔗 Link: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n.k log k), where n is the number of words and k is the average length of the words
// 💾 Space Complexity: O(n.k)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;

        for (string &word : words) {
            if (ans.empty()) {
                ans.push_back(word);
                continue;
            }

            string a = ans.back();
            string b = word;

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if (a != b) {
                ans.push_back(word);
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
