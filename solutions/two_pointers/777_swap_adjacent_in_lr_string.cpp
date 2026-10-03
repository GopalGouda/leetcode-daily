// ✅ Problem: Swap Adjacent in LR String
// 🔗 Link: https://leetcode.com/problems/swap-adjacent-in-lr-string/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canTransform(string start, string result) {
int n = start.size();

        // L and R must appear in the same order
        string s1, s2;
        for (char c : start)
            if (c != 'X') s1 += c;

        for (char c : result)
            if (c != 'X') s2 += c;

        if (s1 != s2)
            return false;

        int i = 0, j = 0;

        while (i < n && j < n) {
            // Skip X
            while (i < n && start[i] == 'X') i++;
            while (j < n && result[j] == 'X') j++;

            if (i == n || j == n)
                break;

            // Same character
            if (start[i] != result[j])
                return false;

            // L can only move left
            if (start[i] == 'L' && i < j)
                return false;

            // R can only move right
            if (start[i] == 'R' && i > j)
                return false;

            i++;
            j++;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
