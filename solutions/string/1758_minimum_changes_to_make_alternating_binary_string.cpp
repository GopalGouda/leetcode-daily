// ✅ Problem: Minimum Changes To Make Alternating Binary String
// 🔗 Link: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/
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
    int minOperations(string s) {
        int mismatch = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != (i % 2 == 0 ? '0' : '1')) {
                mismatch++;
            }
        }

        return min(mismatch, (int)s.size() - mismatch);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
