// ✅ Problem: Find Most Frequent Vowel and Consonant
// 🔗 Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/
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
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);
        
        // Count frequencies
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        int maxVowel = 0;
        int maxConsonant = 0;
        
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            
            if (c == 'a' || c == 'e' || c == 'i' || 
                c == 'o' || c == 'u') {
                maxVowel = max(maxVowel, freq[i]);
            } else {
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }
        
        return maxVowel + maxConsonant;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
