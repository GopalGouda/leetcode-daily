// ✅ Problem: Count Vowel Substrings of a String
// 🔗 Link: https://leetcode.com/problems/count-vowel-substrings-of-a-string/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u';
}
    int countVowelSubstrings(string word) {
    int n = word.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        unordered_set<char> seen;

        for (int j = i; j < n; j++) {
            if (!isVowel(word[j])) break;

            seen.insert(word[j]);

            if (seen.size() == 5) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    string word = "aeiouu";
    cout << countVowelSubstrings(word) << endl;
    return 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
