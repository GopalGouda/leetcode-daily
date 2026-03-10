// ✅ Problem: Maximum Number of Words You Can Type
// 🔗 Link: https://leetcode.com/problems/maximum-number-of-words-you-can-type/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        bool valid = true;

        for (char c : text) {
            if (c == ' ') {
                if (valid) count++;
                valid = true;
            } 
            else if (broken.count(c)) {
                valid = false;
            }
        }

        if (valid) count++;  // last word

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
