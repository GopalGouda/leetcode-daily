// ✅ Problem: Replace All Digits with Characters
// 🔗 Link: Replace All Digits with Characters
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
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2) {
            int x = s[i] - '0';          // convert digit to int
            s[i] = char(s[i - 1] + x);   // shift character
        }
        return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
