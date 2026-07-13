// ✅ Problem: Lexicographically Smallest String After a Swap
// 🔗 Link: https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();

        for (int i = 0; i < n - 1; i++) {
            if ((s[i] - '0') % 2 == (s[i + 1] - '0') % 2 &&
                s[i] > s[i + 1]) {
                swap(s[i], s[i + 1]);
                break;
            }
        }

        return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
