// ✅ Problem: Find the Original Typed String I
// 🔗 Link: https://leetcode.com/problems/find-the-original-typed-string-i/description/
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
    int possibleStringCount(string word) {
    int n = word.size();
    if (n == 0) return 1; // only the empty original

    int runs = 0;
    int i = 0;
    while (i < n) {
        runs++;
        char c = word[i];
        while (i < n && word[i] == c) ++i;
    }
    // formula: 1 + n - runs
    return 1LL + n - runs;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
