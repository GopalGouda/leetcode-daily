// ✅ Problem: Decrypt String from Alphabet to Integer Mapping
// 🔗 Link: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
string result;
        int i = s.size() - 1;

        while (i >= 0) {
            if (s[i] == '#') {
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                result.push_back('a' + num - 1);
                i -= 3;
            } else {
                int num = s[i] - '0';
                result.push_back('a' + num - 1);
                i--;
            }
        }

        reverse(result.begin(), result.end());
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
