// ✅ Problem: String Without AAA or BBB
// 🔗 Link: https://leetcode.com/problems/string-without-aaa-or-bbb/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(a+b)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans;

        while (a > 0 || b > 0) {
            int n = ans.size();

            // If last two are 'a', must place 'b'
            if (n >= 2 && ans[n - 1] == 'a' && ans[n - 2] == 'a') {
                ans += 'b';
                b--;
            }
            // If last two are 'b', must place 'a'
            else if (n >= 2 && ans[n - 1] == 'b' && ans[n - 2] == 'b') {
                ans += 'a';
                a--;
            }
            // Otherwise place the character with larger remaining count
            else if (a >= b && a > 0) {
                ans += 'a';
                a--;
            }
            else {
                ans += 'b';
                b--;
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
