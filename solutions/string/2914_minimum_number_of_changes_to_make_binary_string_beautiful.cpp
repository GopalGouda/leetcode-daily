// ✅ Problem: Minimum Number of Changes to Make Binary String Beautiful
// 🔗 Link: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int changes = 0;
        for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i+1]) ++changes;
        }
        return changes;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
