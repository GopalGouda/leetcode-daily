// ✅ Problem: Percentage of Letter in String
// 🔗 Link: https://leetcode.com/problems/percentage-of-letter-in-string/description/
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
    int percentageLetter(string s, char letter) {
        int count = 0;
        for (char c : s) {
            if (c == letter) {
                count++;
            }
        }
        return (count * 100) / s.size();  // Automatically floors        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
