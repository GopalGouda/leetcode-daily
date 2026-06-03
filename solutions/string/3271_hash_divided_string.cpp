// ✅ Problem: Hash Divided String
// 🔗 Link: https://leetcode.com/problems/hash-divided-string/description/
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
    string stringHash(string s, int k) {
        string result;

        for (int i = 0; i < s.size(); i += k) {
            int sum = 0;

            for (int j = i; j < i + k; j++) {
                sum += s[j] - 'a';
            }

            result += char('a' + (sum % 26));
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
