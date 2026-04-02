// ✅ Problem: String Matching in an Array
// 🔗 Link: https://leetcode.com/problems/string-matching-in-an-array/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n^2 * m) where n is the number of words and m is the average length of the words
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
    vector<string> result;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break; // avoid duplicates
                }
            }
        }

        return result;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
