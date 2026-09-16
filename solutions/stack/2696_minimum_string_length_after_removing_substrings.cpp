// ✅ Problem: Minimum String Length After Removing Substrings
// 🔗 Link: https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/
// 🗂 Topic: stack
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        string st;

        for (char c : s) {
            if (!st.empty() &&
                ((st.back() == 'A' && c == 'B') ||
                 (st.back() == 'C' && c == 'D'))) {
                st.pop_back();
            } else {
                st.push_back(c);
            }
        }

        return st.size();        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
