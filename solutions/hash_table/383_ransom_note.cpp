// ✅ Problem: Ransom Note
// 🔗 Link: https://leetcode.com/problems/ransom-note/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // Count letters in magazine
        for (char c : magazine) {
            freq[c - 'a']++;
        }

        // Use letters for ransomNote
        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0)
                return false;
            freq[c - 'a']--;
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
