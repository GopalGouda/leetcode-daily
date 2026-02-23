// ✅ Problem: Check if Word Equals Summation of Two Words
// 🔗 Link: https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/description/
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
    int convert(string word) {
        string num = "";
        for(char ch : word) {
            num += to_string(ch - 'a');
        }
        return stoi(num);
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return convert(firstWord) + convert(secondWord) == convert(targetWord);
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
