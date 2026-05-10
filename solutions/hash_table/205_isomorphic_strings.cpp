// ✅ Problem: Isomorphic Strings
// 🔗 Link: https://leetcode.com/problems/isomorphic-strings/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // Check mapping from s -> t
            if (s_to_t.count(c1)) {
                if (s_to_t[c1] != c2)
                    return false;
            } else {
                s_to_t[c1] = c2;
            }

            // Check mapping from t -> s
            if (t_to_s.count(c2)) {
                if (t_to_s[c2] != c1)
                    return false;
            } else {
                t_to_s[c2] = c1;
            }
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
