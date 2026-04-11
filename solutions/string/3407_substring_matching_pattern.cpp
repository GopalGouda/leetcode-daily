// ✅ Problem: Substring Matching Pattern
// 🔗 Link: https://leetcode.com/problems/substring-matching-pattern/description/
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
    bool hasMatch(string s, string p) {
        int star = p.find('*');
        
        string prefix = p.substr(0, star);
        string suffix = p.substr(star + 1);

        int pos = s.find(prefix);

        while (pos != string::npos) {
            int nextStart = pos + prefix.size();

            if (suffix.empty() || s.find(suffix, nextStart) != string::npos) {
                return true;
            }

            pos = s.find(prefix, pos + 1);
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
