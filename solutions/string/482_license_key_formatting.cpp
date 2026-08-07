// ✅ Problem: License Key Formatting
// 🔗 Link: https://leetcode.com/problems/license-key-formatting/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans;
        int count = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '-') continue;

            ans += toupper(s[i]);
            count++;

            if (count == k) {
                ans += '-';
                count = 0;
            }
        }

        // Remove trailing dash if present
        if (!ans.empty() && ans.back() == '-')
            ans.pop_back();

        reverse(ans.begin(), ans.end());
        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
