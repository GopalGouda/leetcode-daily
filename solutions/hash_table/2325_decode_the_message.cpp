// ✅ Problem: Decode the Message
// 🔗 Link: https://leetcode.com/problems/decode-the-message/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n + m)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char curr = 'a';
        
        // Build mapping
        for (char ch : key) {
            if (ch != ' ' && mp.find(ch) == mp.end()) {
                mp[ch] = curr++;
            }
        }
        
        // Decode message
        for (char &ch : message) {
            if (ch != ' ') {
                ch = mp[ch];
            }
        }
        
        return message;        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
