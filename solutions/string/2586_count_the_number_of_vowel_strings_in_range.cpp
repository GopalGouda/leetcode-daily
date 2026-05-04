// ✅ Problem: Count the Number of Vowel Strings in Range
// 🔗 Link: https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/description/
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
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;

        for (int i = left; i <= right; i++) {
            string &w = words[i];

            if (isVowel(w.front()) && isVowel(w.back())) {
                count++;
            }
        }

        return count;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u';
    }        
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
