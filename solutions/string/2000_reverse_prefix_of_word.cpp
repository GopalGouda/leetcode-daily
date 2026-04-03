// ✅ Problem: Reverse Prefix of Word
// 🔗 Link: https://leetcode.com/problems/reverse-prefix-of-word/description/
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
    string reversePrefix(string word, char ch) {
    int idx = word.find(ch);
    
    if (idx == string::npos) {
        return word;
    }
    
    reverse(word.begin(), word.begin() + idx + 1);
    return word;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
