// ✅ Problem: Trim Trailing Vowels
// 🔗 Link: https://leetcode.com/problems/trim-trailing-vowels/description/
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
    string trimTrailingVowels(string s) {
        while (!s.empty() && 
              (s.back()=='a' || s.back()=='e' || 
               s.back()=='i' || s.back()=='o' || 
               s.back()=='u')) {
            s.pop_back();
        }
        return s;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
