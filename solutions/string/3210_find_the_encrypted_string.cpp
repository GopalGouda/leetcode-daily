// ✅ Problem: Find the Encrypted String
// 🔗 Link: https://leetcode.com/problems/find-the-encrypted-string/description/
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
    string getEncryptedString(string s, int k) {
        int n = s.size();
        string res = "";

        for (int i = 0; i < n; i++) {
            res += s[(i + k) % n];
        }

        return res;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
