// ✅ Problem: Existence of a Substring in a String and Its Reverse
// 🔗 Link: https://leetcode.com/problems/existence-of-a-substring-in-a-string-and-its-reverse/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_set<string> st;

        // Store all substrings of length 2
        for (int i = 0; i < s.size() - 1; i++) {
            st.insert(s.substr(i, 2));
        }

        reverse(s.begin(), s.end());

        // Check substrings in reversed string
        for (int i = 0; i < s.size() - 1; i++) {
            if (st.count(s.substr(i, 2))) {
                return true;
            }
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
