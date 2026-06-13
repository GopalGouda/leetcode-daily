// ✅ Problem: Remove All Adjacent Duplicates In String
// 🔗 Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
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
    string removeDuplicates(string s) {
        string st;

        for (char ch : s) {
            if (!st.empty() && st.back() == ch) {
                st.pop_back();
            } else {
                st.push_back(ch);
            }
        }

        return st;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
