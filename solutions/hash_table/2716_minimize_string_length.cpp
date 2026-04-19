// ✅ Problem: Minimize String Length
// 🔗 Link: https://leetcode.com/problems/minimize-string-length/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(k)
// 🧠 Approach: Use a hash set to store unique characters

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> st(s.begin(), s.end());
        return st.size();
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
