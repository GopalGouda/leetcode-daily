// ✅ Problem: Reverse Degree of a String
// 🔗 Link: https://leetcode.com/problems/reverse-degree-of-a-string/description/
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
    int reverseDegree(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            int value = 'z' - s[i] + 1;
            ans += value * (i + 1);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
