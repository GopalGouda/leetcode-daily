// ✅ Problem: Goat Latin
// 🔗 Link: https://leetcode.com/problems/goat-latin/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
string vowels = "aeiouAEIOU";
        stringstream ss(sentence);
        string word, result = "";
        int index = 1;

        while (ss >> word) {
            if (vowels.find(word[0]) != string::npos) {
                word = word + "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }

            word += string(index, 'a');

            if (!result.empty()) result += " ";
            result += word;

            index++;
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
