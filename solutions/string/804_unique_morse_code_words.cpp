// ✅ Problem: Unique Morse Code Words
// 🔗 Link: https://leetcode.com/problems/unique-morse-code-words/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n*k)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
    };
    
    unordered_set<string> uniqueTransformations;
    
    for (const string& word : words) {
        string code = "";
        for (char c : word) {
            code += morse[c - 'a'];
        }
        uniqueTransformations.insert(code);
    }
    
    return uniqueTransformations.size();        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
