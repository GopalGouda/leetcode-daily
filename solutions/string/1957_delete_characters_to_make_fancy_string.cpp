// ✅ Problem: Delete Characters to Make Fancy String
// 🔗 Link: https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string res;
        res.reserve(s.size());
        for (char c : s) {
            int m = res.size();
            // if appending c would make last two characters and c all equal, skip it
            if (m >= 2 && res[m-1] == c && res[m-2] == c) {
                continue;
            }
            res.push_back(c);
        }
        return res;  
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
