// ✅ Problem: Check if the Sentence Is Pangram
// 🔗 Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool seen[26] = {false};
        
        for(char c : sentence) {
            seen[c - 'a'] = true;
        }
        
        for(int i = 0; i < 26; i++) {
            if(!seen[i]) return false;
        }
        
        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
