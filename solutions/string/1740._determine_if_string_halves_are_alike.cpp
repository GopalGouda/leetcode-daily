// ✅ Problem: Determine if String Halves Are Alike
// 🔗 Link: https://leetcode.com/problems/determine-if-string-halves-are-alike/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Count vowels in each half separately and compare counts.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {
            'a','e','i','o','u',
            'A','E','I','O','U'
        };
        
        int count = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (vowels.count(s[i])) {
                if (i < n / 2)
                    count++;
                else
                    count--;
            }
        }
        
        return count == 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
