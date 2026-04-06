// ✅ Problem: First Matching Character From Both Ends
// 🔗 Link: https://leetcode.com/problems/first-matching-character-from-both-ends/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstMatchingIndex(string s) {
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] == s[n - i - 1]) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s = "abca";
    cout << firstMatchingIndex(s) << endl;  // Output: 0
    return 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
