// ✅ Problem: Largest Substring Between Two Equal Characters
// 🔗 Link: https://leetcode.com/problems/largest-substring-between-two-equal-characters/description/
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
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> first(26, -1);
        int ans = -1;

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';

            if (first[idx] == -1) {
                first[idx] = i;
            } else {
                ans = max(ans, i - first[idx] - 1);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
