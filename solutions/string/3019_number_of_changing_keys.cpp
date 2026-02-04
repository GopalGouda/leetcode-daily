// ✅ Problem: Number of Changing Keys
// 🔗 Link: https://leetcode.com/problems/number-of-changing-keys/description/
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
    int countKeyChanges(string s) {
        int changes = 0;

        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                changes++;
            }
        }

        return changes;  
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
