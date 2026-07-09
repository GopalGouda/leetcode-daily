// ✅ Problem: First Unique Character in a String
// 🔗 Link: https://leetcode.com/problems/first-unique-character-in-a-string/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        // Find the first unique character
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
